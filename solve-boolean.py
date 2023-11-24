def solve_boolean(expression):
    expression = expression.replace('&', ' and ').replace('|', ' or ')
    expression = expression.replace('T', 'True').replace('F', 'False')
    return str(eval(expression)).lower()