def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        return all(part.strip() == "T" for part in expression.split("&"))
    elif "|" in expression:
        return any(part.strip() == "T" for part in expression.split("|"))