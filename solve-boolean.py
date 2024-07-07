import ast


def solve_boolean(expression):
    if isinstance(expression, str):
        tree = ast.parse(expression)
        return eval(tree.body[0].value)
    elif isinstance(expression, list):
        for exp in expression:
            if solve_boolean(exp):
                return True
    return False