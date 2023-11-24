def solve_boolean(expression):
    expression = expression.lower().replace("&", " and ").replace("|", " or ")
    result = eval(expression)
    return result