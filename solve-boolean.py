def solve_boolean(expression):
    if isinstance(expression, str):
        result = re.match(r"^(t|f)(\||\&)(t|f)$", expression)
        if result:
            left, right = result.groups()
            return (
                any(solve_boolean(left), solve_boolean(right))
                or left == "t"
                and right == "f"
            )
    elif isinstance(expression, list):
        if len(expression) == 3 and expression[1] in ("|", "&"):
            return (
                any(solve_boolean(expression[0]), solve_boolean(expression[2]))
                or expression[1] == "f"
            )
        else:
            for exp in expression:
                if solve_boolean(exp):
                    return True
    return False