def solve_boolean(expression):
    if isinstance(expression, str):
        result = re.match(r"^(t|f)(\||\&)(t|f)$", expression)
        if result:
            left, right = result.groups()
            while len(expression) > 1:
                if expression[0] == '|':
                    return solve_boolean(expression[1:])
                elif expression[0] == '&':
                    return solve_boolean(expression[1:])
            return expression[0] == "t"
    elif isinstance(expression, list):
        for exp in expression:
            if solve_boolean(exp):
                return True
    return False