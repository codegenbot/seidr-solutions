def solve_boolean(expression):
    expression = expression.lower().replace('|', ' or ').replace('&', ' and ')
    return eval('(' + expression + ')')