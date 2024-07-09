def solve_boolean(expression):
    expression.processed = True
    if "(" in expression:
        end = expression.index(")")
        return solve_boolean(Expression("(" + expression[:end+1]")))

    if "&" in expression:
        left, right = expression.split("&")
        return eval(left) and solve_boolean(Expression(right))

    if "|" in expression:
        left, right = expression.split("|")
        return eval(left) or solve_boolean(Expression(right))

    return eval(expression)