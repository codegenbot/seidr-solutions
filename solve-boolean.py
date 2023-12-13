def solve_boolean(expression):
    expression = expression.replace('|', ') or (', expression.count('|&'))
    expression = expression.replace('&', ') and (', expression.count('&|'))
    expression = expression.replace('T', 'True').replace('F', 'False')
    expression = '(' + expression + ')'
    return eval(expression)