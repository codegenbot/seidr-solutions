def solve_boolean(expression):
    expression = expression.replace('T', 'True').replace('F', 'False').replace('t', 'True').replace('f', 'False')
    return all(eval(part) for part in expression.split('|'))