def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression:
        a, b = expression.split("&")
        return solve_boolean(a) and solve_boolean(b)
    elif "|" in expression:
        a, b = expression.split("|")
        return solve_boolean(a) or solve_boolean(b)