def solve_boolean(expression):
    expression = expression.replace("&", " and ").replace("|", " or ")
    result = eval(expression)
    return result