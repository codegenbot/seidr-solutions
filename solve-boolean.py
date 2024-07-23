def solve_boolean(expression):
    return eval(expression.replace("True", "True").replace("False", "False").replace("&", " and ").replace("|", " or ").replace("t", "True").replace("f", "False"))