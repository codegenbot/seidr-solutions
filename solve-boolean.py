def solveBoolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid operation")
    elif "&" in expression:
        left, right = expression.split("&")
        return not (bool(left) and bool(right))
    elif "|" in expression:
        left, right = expression.split("|")
        return bool(left) or bool(right)