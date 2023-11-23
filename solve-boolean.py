def solve_boolean(expression):
    modified_expression = expression.replace('!', ' not ').replace('&', ' and ').replace('|', ' or ')
    return eval(modified_expression.strip())