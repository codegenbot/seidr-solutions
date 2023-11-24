def solve_boolean(expression):
    expression = expression.replace('T', 'True').replace('F', 'False')
    expression = expression.replace('&', ' and ').replace('|', ' or ')
    return eval(expression, {"True": True, "False": False})