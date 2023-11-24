def solve_boolean(expression):
    expression = expression.replace('&', ' and ').replace('|', ' or ')
    expression = expression.replace('t', 'T').replace('f', 'F')
    return eval(expression)