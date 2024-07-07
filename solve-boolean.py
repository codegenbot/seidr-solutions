import re


def solve_boolean(expression):
    if isinstance(expression, str):
        result = re.match(r"(^[tf]\|[tf]$)|(^[tf]&[tf]$)", expression)
        if bool(result):
            left, right = result.groups()
            return left or right
    elif isinstance(expression, list):
        for exp in expression:
            solve_boolean(exp)