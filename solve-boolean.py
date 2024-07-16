def solveBoolean(expression):
    if expression.strip() == "t":
        return True
    elif expression.strip() == "f":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solveBoolean(left).and(solveBoolean(right))
    elif "|" in expression:
        left, right = expression.split("|")
        return solveBoolean(left) or solveBoolean(right)