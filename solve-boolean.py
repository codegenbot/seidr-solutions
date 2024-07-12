def solve_boolean(expression):
    operators = {'T': 'True', 'F': 'False', '|': 'or', '&': 'and'}
    for key, value in operators.items():
        if isinstance(value, str):
            expression = expression.replace(key, value)
    return eval(expression)