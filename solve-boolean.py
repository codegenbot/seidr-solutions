def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")
    return eval(expression.replace("|", " or ").replace("&", " and "), {"__builtins__": None})