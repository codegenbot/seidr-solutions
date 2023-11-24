def solve_boolean(expression):
    expression = expression.replace("|", " or ").replace("&", " and ")
    expression = "(" + expression + ")"
    result = eval(expression)
    return result