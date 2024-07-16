def solve_boolean(expression):
    boolean_map = {'T': True, 'F': False, '|': lambda x, y: x or y, '&': lambda x, y: x and y}
    for key, value in boolean_map.items():
        if key in ['|', '&']:
            expression = expression.replace(key, ' ' + str(value) + ' ')
        else:
            expression = expression.replace(key, str(value))
    return eval(expression)