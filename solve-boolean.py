def solve_boolean(expression):
    expression = expression.lower().replace('|', ' or ')
    return eval(expression)