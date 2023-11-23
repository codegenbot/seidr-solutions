def solve_boolean(expression):
    modified_expression = expression.replace("|", " or ").replace("&", " and ")

    result = eval(modified_expression)
    return result if result is not None else False