def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    if "&" in expression or "|" in expression:
        left, op, right = expression.split()
        return solve_boolean(left) and op == "&" or solve_boolean(left) or op == "|"
    else:
        return solve_boolean(expression)