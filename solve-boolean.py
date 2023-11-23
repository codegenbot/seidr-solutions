def solve_boolean(expression):
    translation_dict = {'T': 'True', 'F': 'False', '|': ' or ', '&': ' and ', '!': ' not '}
    modified_expression = expression.translate(str.maketrans(translation_dict)).replace('!', '')
    return eval(modified_expression.strip())