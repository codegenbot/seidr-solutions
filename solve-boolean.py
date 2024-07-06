import re


def solve_boolean(expression):
    if not expression or len(expression) == 1 and expression[0] in "()":
        return True

    match = re.match(r"^(?P<left>.*?)((?:\||\&)(?P<right>.*))$", expression)
    if match:
        left, right = match.groups()
        return solve_boolean(left) | solve_boolean(right)

    raise ValueError("Invalid input")