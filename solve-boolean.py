def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    result = None
    while "|" in expression or "&" in expression:
        if "&" in expression:
            left, right = expression.split("&", 1)
            expression = str(bool(solve_boolean(left))) & right
        else:
            left, right = expression.split("|", 1)
            expression = str(bool(solve_boolean(left))) | right
    return bool(expression) if result is None else eval(expression)