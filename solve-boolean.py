def solve_boolean(expression):
    expression = expression.replace('F', 'False').replace('T', 'True')
    return eval(expression)