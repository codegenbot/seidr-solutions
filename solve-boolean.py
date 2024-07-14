def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid Boolean operation")
    elif "&" in expression:
        a, b = expression.split("&")
        return not (solveBoolean(a) and solveBoolean(b))
    elif "|" in expression:
        a, b = expression.split("|")
        return solveBoolean(a) or solveBoolean(b)