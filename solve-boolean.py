def solve_boolean(expression):
    def eval_expr(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif expression[0] in ["&", "|"]:
            i = expression.find("(")
            if i != -1:  
                j = expression.find(")")
                left = eval_expr(expression[i+1:j])
                right = eval_expr(expression[j+1:])
                if expression[0] == "&":
                    return left and right
                else:
                    return left or right

            elif expression[0] in ["&", "|"]:
                i = 1
                j = len(expression) - 1
                while i <= j and (expression[i] in ["&", "|"]):
                    i += 1
                left = eval_expr(expression[:i])
                if i < j:
                    right = eval_expr(expression[i+1:])
                    if expression[0] == "&":
                        return left and right
                    else:
                        return left or right
                else:
                    if expression[0] == "&":
                        return left
                    else:
                        return left

        else:  
            i = expression.find("(")
            j = expression.find(")")
            if i != -1:
                return eval_expr(expression[i+1:j])
            else:
                if expression == "T":
                    return True
                elif expression == "F":
                    return False