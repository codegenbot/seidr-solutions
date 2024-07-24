def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid operation")
    elif "&" in expression:
        return all(char == "T" for char in expression)
    elif "|" in expression:
        return any(char == "T" for char in expression)