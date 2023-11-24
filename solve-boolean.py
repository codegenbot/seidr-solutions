def solve_boolean(expression):
    expression = expression.replace('|', ' or ').replace('&', ' and ')
    return eval(expression)