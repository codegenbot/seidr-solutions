def solve_boolean(expression):
    if "(" in expression:
        end = expression.index(")")
        return solve_boolean("(" + expression[:end+1])

    if "&" in expression:
        left, right = expression.split("&")
        return eval(left) and solve_boolean(right)

    if "|" in expression:
        left, right = expression.split("|")
        return eval(left) or solve_boolean(right)

    return eval(expression)