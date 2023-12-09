def solve_boolean(expression):
    expression = expression.lower()
    expression = expression.replace('t', 'True')
    expression = expression.replace('f', 'False')
    return eval(expression)