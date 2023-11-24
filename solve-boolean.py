def solve_boolean(expression):
    expression = expression.replace("&", " and ").replace("|", " or ")
    import ast
    tree = ast.parse(expression, mode='eval')
    result = ast.literal_eval(tree)
    return result