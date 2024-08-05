def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid operation")
    elif "&" in expression:
        parts = expression.split("&")
        return not (bool(parts[0]) or bool(parts[1]))
    elif "|" in expression:
        parts = expression.split("|")
        return bool(parts[0]) or bool(parts[1])