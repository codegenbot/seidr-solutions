def solve_boolean(expression):
    expression = expression.lower()
    expression = expression.replace('t', 'True').replace('f', 'False')
    expression = expression.replace('|', ' or ').replace('&', ' and ')
    return eval(expression)