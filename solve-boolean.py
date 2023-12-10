def solve_boolean(expression):
    expression = expression.replace('T', 'True').replace('F', 'False').replace('|', 'or').replace('&', 'and')
    return eval(expression)