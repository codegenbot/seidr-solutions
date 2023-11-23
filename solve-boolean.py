def solve_boolean(expression):
    translation_dict = {'T': 'True', 'F': 'False', '|': ' or ', '&': ' and '}
    modified_expression = expression.translate(str.maketrans(translation_dict))
    return eval(modified_expression)