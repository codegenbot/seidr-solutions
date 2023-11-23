def solve_boolean(expression):
    translation_dict = {'T': 'True', 'F': 'False', '|': ' or ', '&': ' and ', '!': 'not '}
    modified_expression = expression.translate(str.maketrans(translation_dict))
    modified_expression = modified_expression.replace('not', '!')
    return bool(eval(modified_expression))