def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid input")
    elif "&" in expression:
        a, b = expression.split("&")
        return not (solve_boolean(a) or solve_boolean(b))
    elif "|" in expression:
        a, b = expression.split("|")
        return solve_boolean(a) or solve_boolean(b)