def solve_boolean(expression):
    expression = expression.replace('T', 'True').replace('F', 'False').replace('&', ' and ').replace('|', ' or ')
    return eval(expression)