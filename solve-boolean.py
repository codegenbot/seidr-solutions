def solve_boolean(expression):
    expression = expression.lower().replace("t", "True").replace("f", "False")
    expression = expression.replace("&", " and ").replace("|", " or ")
    return eval(expression)