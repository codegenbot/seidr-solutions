def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        a, b = expression.split("&")
        return bool(solve_boolean(a) and solve_boolean(b))
    elif "|" in expression:
        a, b = expression.split("|")
        return bool(solve.Boolean(solve_boolean(a)) or solve.Boolean(solve_boolean(b)))