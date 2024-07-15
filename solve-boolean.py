def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        return evaluate_and(solve_boolean, expression)
    elif "|" in expression:
        return evaluate_or(solve_boolean, expression)


def evaluate_and(func, expression):
    left, right = expression.split("&")
    return func(left) and func(right)


def evaluate_or(func, expression):
    if "&" in expression:
        return False  # If '&' is present, evaluate as AND
    left, right = expression.split("|")
    return func(left) or func(right)