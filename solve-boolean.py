def solve_boolean(expression):
    return eval(expression.lower().replace("t", "True").replace("f", "False"))