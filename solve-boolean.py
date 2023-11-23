def solve_boolean(expression):
    translation_dict = {'T': 'True', 'F': 'False', '|': ' or ', '&': ' and ', '!': 'not '}
    modified_expression = expression.translate(str.maketrans(translation_dict))
    return eval(modified_expression, {'True': True, 'False': False, 'or': any, 'and': all})