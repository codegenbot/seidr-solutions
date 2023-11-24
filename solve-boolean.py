def solve_boolean(expression):
    expression = expression.replace("|", " or ").replace("&", " and ").replace("t", "True").replace("f", "False")
    return eval(expression, { "True": True, "False": False })