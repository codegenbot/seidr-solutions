def solve_boolean(expression):
    if "&" in expression or "|" in expression:
        a, op, b = expression.split("(")[0].rpartition(")")
        return bool(solve_boolean(a)) and (op == "&" and bool(solve_boolean(b))) or (op == "|" and not bool(solve_boolean(b)))
    elif expression == "T":
        return True
    elif expression == "F":
        return False