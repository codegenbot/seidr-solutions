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
                expression = expression[:i] + expression[j+1:]
                return eval_expr(left) and right or left  
            else:
                left = eval_expr(expression[1])
                right = eval_expr(expression[2:])
                if expression[0] == "&":
                    return left and right
                else:
                    return left or right
        else:  
            i = expression.find("(")
            j = expression.find(")")
            return eval_expr(expression[i+1:j])

    return eval_expr(expression)