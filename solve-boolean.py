def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("t", "False").replace("f", "False").replace("|", "or").replace("&", "and"))