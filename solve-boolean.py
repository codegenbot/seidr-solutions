def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid operation")
    elif "&" in expression:
        return all(map(lambda x: x == "T", expression.split("&")))
    else:
        return any(map(lambda x: x == "T", expression.split("|")))