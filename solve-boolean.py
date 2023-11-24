def solve_boolean(expression):
    expression = expression.replace('&', ' and ').replace('|', ' or ')
    expression = expression.replace('t', 'True').replace('f', 'False')
    return eval(expression)