def solve_boolean(expression):
    def evaluate_expression(expression):
        if expression.startswith("(") and expression.endswith(")"):
            return evaluate_expression(expression[1:-1])
        elif expression == "T":
            return True
        elif expression == "F":
            return False
        elif "&" in expression:
            left, right = expression.split("&", 1)
            return evaluate_expression(left) and evaluate_expression(right)
        elif "|" in expression:
            left, right = expression.split("|", 1)
            return evaluate_expression(left) or evaluate_expression(right)

    return evaluate_expression(expression)