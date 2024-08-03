def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid Expression")
    elif "&" in expression:
        parts = expression.split("&")
        return not (bool(eval(parts[0])) or bool(eval(parts[1])))
    elif "|" in expression:
        parts = expression.split("|")
        return bool(eval(parts[0])) or bool(eval(parts[1]))