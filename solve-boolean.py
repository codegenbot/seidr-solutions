def solveBoolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression:
        a, b = expression.split("&")
        return solveBoolean(a) and solveBoolean(b)
    elif "|" in expression:
        a, b = expression.split("|")
        return solveBoolean(a) or solveBoolean(b)