def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        a, b = expression.split("&")
        return bool(solveBoolean(a)) and bool(solveBoolean(b))
    elif "|" in expression:
        a, b = expression.split("|")
        return bool(solveBoolean(a)) or bool(solveBoolean(b))