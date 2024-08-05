def solveBoolean(expression):
    def evaluateBoolean(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif "&" in expression:
            left, right = expression.split("&")
            return evaluateBoolean(left) and evaluateBoolean(right)
        elif "|" in expression:
            left, right = expression.split("|")
            return evaluateBoolean(left) or evaluateBoolean(right)

    return evaluateBoolean(expression)