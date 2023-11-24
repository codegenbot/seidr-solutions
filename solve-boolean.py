def solve_boolean(expression):
    expression = expression.replace('&', ' and ').replace('|', ' or ')
    return eval(expression.upper())