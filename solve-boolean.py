def solve_boolean(expression):
    expression = expression.replace("|", " or ")
    expression = expression.replace("&", " and ")
    return eval(expression)