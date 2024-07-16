def solve_boolean(expression):
    boolean_map = {'T': 'True', 'F': 'False', '|': lambda x, y: eval(x) or eval(y), '&': lambda x, y: eval(x) and eval(y)}
    for key, value in boolean_map.items():
        expression = expression.replace(key, value)
    return eval(expression)