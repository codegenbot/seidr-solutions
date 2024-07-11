import ast

def solve_boolean(expression):
    return ast.literal_eval(expression.replace("T", "True").replace("F", "False"))

expression = input("Enter a Boolean expression: ")
print(solve_boolean(expression))