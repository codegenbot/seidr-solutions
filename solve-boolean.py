import ast


def solve_boolean(expression):
    return ast.literal_eval(expression.replace("T", "True").replace("F", "False"))


print(solve_boolean(input()))