def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression or "|" in expression:
        left, right = expression.split(expression[0])
        return solve_boolean(left) and solve_boolean(right)