def solve_boolean(expression):
    expression = expression.replace('t', 'True').replace('f', 'False').replace('|', ' or ').replace('&', ' and ')
    return eval(expression)