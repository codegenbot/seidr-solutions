def solve_boolean(expression):
    return eval(expression, {"or": lambda x, y: x or y, "and": lambda x, y: x and y})