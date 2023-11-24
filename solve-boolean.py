def solve_boolean(expression):
    expression = expression.lower().replace('|', ') or (').replace('&', ') and (')
    expression = '(' + expression + ')'
    return eval(expression)