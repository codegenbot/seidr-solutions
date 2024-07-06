import re


def solve_boolean(expression):
    # Your existing code here
    result = re.match(r"^(?P<left>.*?)(\||\&)(?P<right>.*)$", expression)
    if result:
        left, right = result.groups()
        return solve_boolean(left) | solve_boolean(right)
    elif expression == "t":
        return True
    else:
        return False