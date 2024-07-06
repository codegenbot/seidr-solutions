import re


def solve_boolean(expression):
    if len(expression) < 2 or expression[0] in "()":
        raise ValueError("Invalid input")

    match = re.match(r"^(?P<left>.*?)((?:\||\&)(?P<right>.*))$", expression)
    if match:
        left, right = match.groups()
        return solve_boolean(left) | solve_boolean(right)

    raise ValueError("Invalid input")