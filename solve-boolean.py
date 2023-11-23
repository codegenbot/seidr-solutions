def solve_boolean(expression):
    translation_dict = {'T': 'True', 'F': 'False', '|': ' or ', '&': ' and ', '!': ' not '}
    modified_expression = expression.replace('!', ' not ').replace('&', ' and ').replace('|', ' or ')
    return eval(modified_expression.strip())