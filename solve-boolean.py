def solve_boolean(expression):
    result = eval(expression)
    return result if isinstance(result, bool) else False