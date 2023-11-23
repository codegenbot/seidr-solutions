def solve_boolean(expression):
    return eval(expression, {'|': 'or', '&': 'and'})