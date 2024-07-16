def solve_boolean(expression):
    boolean_map = {'T': True, 'F': False, 't': True, 'f': False, '|': '|', '&': '&'}
    for key, value in boolean_map.items():
        expression = expression.replace(key, str(value))
    return eval(expression)