def solveBoolean(expression):
    def evaluate_boolean(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif "&" in expression:
            left, right = expression.split("&")
            return evaluate_boolean(left) and evaluate_boolean(right)
        elif "|" in expression:
            left, right = expression.split("|")
            return evaluate_boolean(left) or evaluate_boolean(right)

    return str(evaluate_boolean(expression))