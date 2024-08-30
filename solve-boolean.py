def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise Exception("Invalid expression")
    elif "&" in expression:
        left, right = expression.split("&")
        return not (solveBoolean(left) and solveBoolean(right))
    elif "|" in expression:
        left, right = expression.split("|")
        return solveBoolean(left) or solveBoolean(right)