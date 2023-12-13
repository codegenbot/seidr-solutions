def solve_boolean(expression):
    expression = expression.replace('f', 'False').replace('t', 'True')
    return eval(expression.capitalize())