def solve_boolean(expression):
    expression = expression.replace('T', 'True').replace('F', 'False')
    expression = expression.replace('&', ' and ')
    expression = expression.replace('|', ' or ')
    expression = "(" + expression + ")"

    return eval(expression)