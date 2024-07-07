import re


def solve_boolean(expression):
    result = re.match(r"^(t|f)((\||\&)+(t|f))*$", expression)
    if result:
        left, right = result.groups()
        return (
            any(solve_boolean(left), solve_boolean(right))
            or left == "t"
            and right == "f"
        )
    elif isinstance(expression, list):
        for exp in expression:
            if solve_boolean(exp):
                return True
    return False