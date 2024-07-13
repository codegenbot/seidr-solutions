def solveBoolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression:
        parts = expression.split("&")
        for part in parts:
            if part != "f":
                return False
        return True
    elif "|" in expression:
        parts = expression.split("|")
        for part in parts:
            if part != "f":
                return True
        return False