def solveBoolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return bool(left) and bool(right)
    else:
        left, right = expression.split("|")
        return bool(left) or bool(right)