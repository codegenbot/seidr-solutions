import re


def solve_boolean(expression):
    if not isinstance(expression, str) or not re.match(
        r"^(t|f)(\||\&)(t|f)$", expression
    ):
        raise ValueError("Invalid input")
    result = re.match(r"^(t|f)(\||\&)(t|f)$", expression)
    if result:
        left, right = result.groups()
        return solve_boolean(left) | solve_boolean(right)
    else:
        raise ValueError("Invalid input")