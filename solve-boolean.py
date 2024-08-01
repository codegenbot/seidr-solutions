def solveBoolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return not (bool(solveBoolean(left)) and bool(solveBoolean(right)))
    elif "|" in expression:
        left, right = expression.split("|")
        return bool(solveBoolean(left)) or bool(solveBoolean(right))