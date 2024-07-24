def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        parts = expression.split("&")
        return all(solve_boolean(p) for p in parts)
    elif "|" in expression:
        parts = expression.split("|")
        return any(solve_boolean(p) for p in parts)