def solve_boolean(expression):
    translation_dict = {'T': True, 'F': False, '|': or, '&': and}
    for key, value in translation_dict.items():
        expression = expression.replace(key, str(value))
        
    return eval(expression.strip())