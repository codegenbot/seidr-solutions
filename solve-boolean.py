def solve_boolean(expression):
    expression = expression.replace("|", " | ").replace("&", " & ")
    return eval(expression.replace("T", "True").replace("F", "False"))