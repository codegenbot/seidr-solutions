def solve_boolean(expression):
    return eval(expression.replace("|", " or ").replace("&", " and "))