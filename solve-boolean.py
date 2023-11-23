def solve_boolean(expression):
    return eval(expression.replace('F', 'False').replace('T', 'True')) if expression else False