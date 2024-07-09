def solve_boolean(expression):
    def eval_expr(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif expression[0] in ["&", "|"]:
            i = expression.find("(")
            j = expression.find(")")
            left = eval_expr(expression[i+1:j])
            remaining = expression[:i] + expression[j+1:]
            if expression[0] == "&":
                return eval_expr(remaining) and left
            else:
                return eval_expr(remaining) or left

    return eval_expr(expression)