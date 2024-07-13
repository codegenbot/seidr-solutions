def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        return all(map(lambda x: x == "T", expression))
    elif "|" in expression:
        return any(map(lambda x: x == "T", expression))