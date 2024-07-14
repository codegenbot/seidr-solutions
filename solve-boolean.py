def solve_boolean(expression):
    if "&" in expression:
        left, right = expression.split("&")
        return "True" if solve_boolean(left) == "True" and solve_boolean(right) == "True" else "False"
    elif "|" in expression:
        left, right = expression.split("|")
        return "True" if solve_boolean(left) == "True" or solve_boolean(right) == "True" else "False"
    else:
        return expression