import ast

def solve_boolean(expression):
    expression_ast = ast.parse(expression, mode='eval')
    return bool(ast.literal_eval(expression_ast.body))