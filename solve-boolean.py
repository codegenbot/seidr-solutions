def solve_boolean(expression):
    def simplify_expression(expression):
        while "&|" in expression:
            if "&" in expression and "|" in expression:
                left, middle, right = expression.split("&")
                left = left.replace("|", "| True").replace("T|", "True | ").replace("F|", "False | ")
                middle = middle.replace("|", "| True").replace("T|", "True | ").replace("F|", "False | ")
                right = right.replace("|", "| True").replace("T|", "True | ").replace("F|", "False | ")
                expression = left + "&" + middle + "&" + right
            elif "&" in expression:
                left, right = expression.split("&")
                if "|" in left:
                    left = left.replace("|", "| True").replace("T|", "True | ").replace("F|", "False | ")
                else:
                    left = left.replace("T", "True").replace("F", "False")
                if "|" in right:
                    right = right.replace("|", "| True").replace("T|", "True | ").replace("F|", "False | ")
                else:
                    right = right.replace("T", "True").replace("F", "False")
                expression = left + "&" + right
            elif "|" in expression:
                left, right = expression.split("|")
                if "&" in left:
                    left = left.replace("&", "& True").replace("T&", "& True").replace("F&", "& False")
                else:
                    left = left.replace("T", "True").replace("F", "False")
                if "&" in right:
                    right = right.replace("&", "& True").replace("T&", "& True").replace("F&", "& False")
                else:
                    right = right.replace("T", "True").replace("F", "False")
                expression = left + "|" + right

        while "&&" in expression:
            if "||" in expression and "&&" in expression:
                left, middle, right = expression.split("||")
                left = left.replace("&", "& True").replace("T&", "& True").replace("F&", "& False")
                middle = middle.replace("&", "& True").replace("T&", "& True").replace("F&", "& False")
                right = right.replace("&", "& True").replace("T&", "& True").replace("F&", "& False")
                expression = left + "||" + middle + "||" + right
            elif "&&" in expression:
                left, right = expression.split("&&")
                if "||" in left:
                    left = left.replace("|", "| True").replace("T|", "True | ").replace("F|", "False | ")
                else:
                    left = left.replace("T", "True").replace("F", "False")
                if "||" in right:
                    right = right.replace("|", "| True").replace("T|", "True | ").replace("F|", "False | ")
                else:
                    right = right.replace("T", "True").replace("F", "False")
                expression = left + "&&" + right
            elif "|" in expression:
                left, right = expression.split("|")
                if "&" in left:
                    left = left.replace("&", "& True").replace("T&", "& True").replace("F&", "& False")
                else:
                    left = left.replace("T", "True").replace("F", "False")
                if "&" in right:
                    right = right.replace("&", "& True").replace("T&", "& True").replace("F&", "& False")
                else:
                    right = right.replace("T", "True").replace("F", "False")
                expression = left + "|" + right

        return eval(expression)
    return solve_boolean(simplify_expression(expression))