def solve_boolean(expression):
    expression = expression.lower()
    expression = expression.replace('t', 'True').replace('f', 'False')
    return eval(expression)