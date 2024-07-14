```
def solve_boolean(expression):
    while "&|" in expression:
        if "&" in expression and "|" in expression:
            left, middle, right = expression.split("&")
            expression = left.replace("|", "| True").replace("T|", "True | ").replace("F|", "False | ") + "&" + middle.replace("|", "| True").replace("T|", "True | ").replace("F|", "False | ") + "&" + right
        elif "&" in expression:
            left, right = expression.split("&")
            if "|" in left:
                left = left.replace("|", "| True").replace("T|", "True | ").replace("F|", "False | ")
            else:
                left = left.replace("T", "True").replace("F", "False")
            expression = left + "&" + right
        elif "|" in expression:
            left, right = expression.split("|")
            if "&" in left:
                left = left.replace("&", "& True").replace("T&", "& True").replace("F&", "& False")
            else:
                left = left.replace("T", "True").replace("F", "False")
            expression = left + "|" + right

    while "&&" in expression and "||" not in expression:
        if "&&" in expression:
            left, right = expression.split("&&")
            if "|" in left:
                left = left.replace("|", "| True").replace("T|", "True | ").replace("F|", "False | ")
            else:
                left = left.replace("T", "True").replace("F", "False")
            expression = left + "&&" + right

    return eval(expression)