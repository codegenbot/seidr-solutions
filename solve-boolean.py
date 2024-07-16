def solve_boolean(expression):
    boolean_map = {'T': True, 'F': False, '|': ' or ', '&': ' and '}
    expression = expression.upper()
    for key, value in boolean_map.items():
        if type(value) == bool:
            expression = expression.replace(key, str(value))
        elif type(value) == str:
            expression = expression.replace(key, value)
    return eval(expression)