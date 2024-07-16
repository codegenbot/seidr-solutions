def solve_boolean(expression):
    boolean_map = {'t': 'True', 'f': 'False', '|': 'or', '&': 'and'}
    expression = expression.lower()
    for key, value in boolean_map.items():
        expression = expression.replace(key, value)
    return eval(expression)