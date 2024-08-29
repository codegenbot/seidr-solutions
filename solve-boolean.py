```
def solve_boolean(expression):
    def eval_expression(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif "&" in expression:
            a, b = expression.split("&")
            return eval_expression(a) and eval_expression(b)
        elif "|" in expression:
            a, b = expression.split("|")
            return eval_expression(a) or eval_expression(b)
        else:
            return bool(int(expression))

    return eval_expression(expression)