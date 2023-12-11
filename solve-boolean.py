import ast

def solve_boolean(expression):
    expression = expression.replace('T', 'True').replace('F', 'False')
    
    return ast.literal_eval(expression)