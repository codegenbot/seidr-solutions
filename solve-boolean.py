def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        return all(bool(c) for c in expression)
    elif "|" in expression:
        return any(bool(c) for c in expression)