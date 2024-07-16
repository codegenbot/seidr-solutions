def solve_boolean(expression):
    boolean_map = {'T': True, 'F': False, '|': lambda x, y: x or y, '&': lambda x, y: x and y}
    for key, value in boolean_map.items():
        expression = expression.replace(key, str(value))
    expression = expression.replace("True", "T").replace("False", "F")
    return eval(expression)