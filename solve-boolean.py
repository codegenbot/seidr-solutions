def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        return all(map(solve_boolean, expression.split("&")))
    elif "|" in expression:
        return any(map(solve_boolean, expression.split("|")))