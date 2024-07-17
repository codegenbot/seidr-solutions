def solve_boolean(expression):
    def eval_expression(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif "&" in expression:
            left, right = expression.split("&")
            return eval_expression(left) and eval_expression(right)
        elif "|" in expression:
            left, right = expression.split("|")
            return eval_expression(left) or eval_expression(right)

    return eval_expression(expression)