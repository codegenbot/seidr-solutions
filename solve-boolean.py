def solve_boolean(expression):
    modified_expression = expression.replace('|', ' or ').replace('&', ' and ')
    return eval(modified_expression.strip())