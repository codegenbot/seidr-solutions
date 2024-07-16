def solve_boolean(expression):
    boolean_map = {'T': 'True', 'F': 'False', 't': 'True', 'f': 'False', '|': 'or', '&': 'and'}
    for key, value in boolean_map.items():
        expression = expression.replace(key, value)
    return eval(expression)