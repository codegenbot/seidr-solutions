def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("t", "T").replace("f", "F"))