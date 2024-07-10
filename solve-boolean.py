def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solve_boolean(left) and solve_boolean(right)
    elif "|":
        left, right = expression.split("|", 1)
        if "&" in right:
            return (solve_boolean(left) and solve_boolean(right.split("&")[0])) or solve_boolean(right.split("&")[1])
        else:
            return solve_boolean(left) or solve_boolean(right)