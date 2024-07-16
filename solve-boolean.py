def solve_boolean(expression):
    boolean_map = {'t': True, 'f': False, '|': lambda x, y: x or y, '&': lambda x, y: x and y}
    for key, value in boolean_map.items():
        expression = expression.replace(key, str(value).lower())
    return eval(expression)