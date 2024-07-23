def solve_boolean(expression):
    return eval(expression.replace("|", " or ").replace("&", " and ").replace("t", "True").replace("f", "False"))