def solve_boolean(expression):
    expression = expression.replace('&', ' and ').replace('|', ' or ')
    expression = ''.join(x + ' ' for x in expression)
    return eval(expression)