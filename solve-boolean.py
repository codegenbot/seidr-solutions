def solve_boolean(expression):
    if isinstance(expression, str):
        result = re.match(r"^(t|f)(\||\&(t|f))*$", expression)
        if result:
            left, right = result.groups()
            return (True, solve_boolean(right) and left == "t" and right == "f")
    elif isinstance(expression, list):
        for exp in expression:
            if solve_boolean(exp):
                return True
    return False