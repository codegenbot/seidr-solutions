def solve_boolean(expression):
    def eval_expr(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif expression[0] in ["&", "|"]:
            left = eval_expr(expression[1])
            right = eval_expr(expression[2:])
            if expression[0] == "&":
                return left and right
            else:
                return left or right
        else:  # expression is enclosed in parentheses
            i = expression.find("(")
            j = expression.find(")")
            return eval_expr(expression[i+1:j])
    return eval_expr(expression)