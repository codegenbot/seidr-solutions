def solve_boolean(expression):
    if isinstance(expression, str):
        result = re.match(r"^(t|f)(\||\&)(t|f)$", expression)
        if result:
            left, right = result.groups()
            return left == "t" or solve_boolean(right)
    elif isinstance(expression, list):
        for exp in expression:
            if solve_boolean(exp):
                return True
    return False