def solve_boolean(expression):
    if isinstance(expression, str):
        result = re.match(r"^(t|f)(\||\&)(t|f)$", expression)
        if result:
            left, right = result.groups()
            return solve_boolean(left) and solve_boolean(right)
    elif isinstance(expression, list):
        for exp in expression:
            solve_boolean(exp)