def solve_boolean(expression):
    if isinstance(expression, str):
        result = re.match(r"^(t|f)(\||\&)(t|f)$", expression)
        if result:
            left, right = result.groups()
            return solve_boolean(left[0]) or solve_boolean(right[0])
    elif isinstance(expression, list):
        for exp in expression:
            solve_boolean(exp)