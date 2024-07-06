import re


def solve_boolean(expression):
    # Use regular expressions to parse the expression and evaluate it
    result = re.match(r"^(?P<left>.*?)(\||\&)(?P<right>.*)$", expression)
    if result:
        left, right = result.groups()
        return solve_boolean(left) | solve_boolean(right)
    elif expression == "t":
        return True
    else:
        return False