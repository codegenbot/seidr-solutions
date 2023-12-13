def solve_boolean(expression):
    modified_expression = expression.replace('T', 'True').replace('F', 'False')
    result = eval(modified_expression)
    return bool(result)