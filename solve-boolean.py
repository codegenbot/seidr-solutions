import ast

expression = input().strip()

def solve_boolean(expression):
    return ast.literal_eval(
        expression.replace("T", "True")
        .replace("F", "False")
        .replace("|", " or ")
        .replace("&", " and ")
    )

print(solve_boolean(expression))