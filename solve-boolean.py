def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        return all(c == "T" for c in expression)
    elif "|" in expression:
        return any(c == "T" for c in expression)