def solveBoolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solveBoolean(left) and solveBoolean(right)
    elif "|" in expression:
        left, right = expression.split("|")
        return solveBoolean(left) or solveBoolean(right)