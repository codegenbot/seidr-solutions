def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise Exception("Invalid expression")
    elif "&" in expression:
        return all(map(lambda x: x.lower() != "f", expression))
    elif "|" in expression:
        return any(map(lambda x: x.lower() != "f", expression))