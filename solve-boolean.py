def solve_boolean(expression):
    expression = expression.replace('t', 'True').replace('f', 'False').replace('T', 'True').replace('F', 'False')
    return eval(expression)