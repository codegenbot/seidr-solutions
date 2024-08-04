def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        a, b = expression.split("&")
        return bool(solveBoolean(a)) & bool(solveBoolean(b))
    elif "|" in expression:
        a, b = expression.split("|")
        return bool(solveBoolean(a)) | bool(solveBoolean(b))