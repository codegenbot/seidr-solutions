def solve_boolean(expression):
    expression = expression.upper().replace("T", "True").replace("F", "False")
    return eval(expression)