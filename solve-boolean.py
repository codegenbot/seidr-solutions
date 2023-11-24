def solve_boolean(expression):
    expression = f"({expression.lower().replace('|', ' or ').replace('&', ' and ')})"
    return eval(expression)