def solve_boolean(expression):
    def evaluate_expression(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif "&" in expression:
            a, b = expression.split("&")
            return evaluate_expression(a) and evaluate_expression(b)
        elif "|" in expression:
            a, b = expression.split("|")
            return evaluate_expression(a) or evaluate_expression(b)

    return evaluate_expression(expression)