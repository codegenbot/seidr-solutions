def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return (solve_boolean(left), solve_boolean(right))[0]
    elif "|" in expression:
        left, right = expression.split("|")
        return (solve_boolean(left), solve_boolean(right))[0]