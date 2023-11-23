def solve_boolean(expression):
    translation_dict = {'T': 'True', 'F': 'False', '|': ' or ', '&': ' and ', '!': 'not'}
    modified_expression = expression.replace('!', '').translate(str.maketrans(translation_dict))
    return eval(modified_expression.strip()) or False