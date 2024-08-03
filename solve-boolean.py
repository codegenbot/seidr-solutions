def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        left, right = expression.split("&")
        return not (solve_boolean(left) and solve_boolean(right))
    elif "|" in expression:
        left, right = expression.split("|")
        return solve_boolean(left) or solve_boolean(right)