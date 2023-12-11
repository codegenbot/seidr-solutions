def solve_boolean(expression):
    return eval(expression.replace('T', 'True').replace('F', 'False').replace('t', 'True').replace('f', 'False').replace('|', ' or ').replace('&', ' and '))