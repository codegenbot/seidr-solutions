def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False").replace("T", "True").replace("F", "False").replace("&", " and ").replace("|", " or "))