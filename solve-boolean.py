import ast

raw_input = input

def solve_boolean(expression):
    return ast.literal_eval(expression.replace("T", "True").replace("F", "False"))

expression = raw_input()
print(solve_boolean(expression))