def solve_boolean(expression):
    modified_expression = expression.replace("T", "True").replace("F", "False")
    modified_expression = modified_expression.replace("|", " or ").replace("&", " and ")

    return eval(modified_expression) if modified_expression else False