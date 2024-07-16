def solve_boolean(expression):
    boolean_map = {'T': True, 'F': False, 't': True, 'f': False, '|': 'or', '&': 'and'}
    for key, value in boolean_map.items():
        expression = expression.replace(key, str(value))
    return eval(expression.replace('or', 'or').replace('and', 'and').replace('T', 'True').replace('F', 'False'))