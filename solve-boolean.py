def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        operands = expression.split("&")
        return all(solve_boolean(op) for op in operands)
    elif "|" in expression:
        operands = expression.split("|")
        return any(solve_boolean(op) for op in operands)