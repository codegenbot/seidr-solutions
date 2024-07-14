def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        ops = expression.split("&")
        return all(solve_boolean(op) for op in ops)
    elif "|" in expression:
        ops = expression.split("|")
        return any(solve_boolean(op) for op in ops)