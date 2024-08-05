def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        parts = expression.split("&")
        return all(part != "F" for part in parts)
    elif "|" in expression:
        parts = expression.split("|")
        return any(part != "F" for part in parts)