def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        a, b = expression.split("&")
        return bool(a) and bool(b)
    elif "|" in expression:
        a, b = expression.split("|")
        return bool(a) or bool(b)