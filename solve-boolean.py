def solve_boolean(expression):
    expression = expression.lower()
    expression = expression.replace('&', ' and ')
    expression = expression.replace('|', ' or ')
    return eval(expression)