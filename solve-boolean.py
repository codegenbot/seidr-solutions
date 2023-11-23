def solve_boolean(expression):
    expression = expression.lower().replace('t', 'True').replace('f', 'False').replace('|', 'or').replace('&', 'and')
    return bool(eval(expression))