def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("|", " or ").replace("&", " and "), {"__builtins__": {}})