def solve_boolean(expression):
    return bool(eval(expression.replace('t', 'True').replace('f', 'False')))