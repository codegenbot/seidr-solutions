def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        parts = expression.split("&")
        return not (bool(parts[0].strip("f")) ^ bool(parts[1].strip("f")))
    elif "|" in expression:
        parts = expression.split("|")
        return bool(parts[0].strip("f")) | bool(parts[1].strip("f"))