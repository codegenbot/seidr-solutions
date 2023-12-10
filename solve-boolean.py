def solve_boolean(expression):
    return bool(eval(expression.replace('T', 'True').replace('F', 'False')))