import ast

def solve_boolean():
    expression = input().strip()
    return ast.literal_eval(
        expression.replace("T", "True")
        .replace("F", "False")
        .replace("|", " or ")
        .replace("&", " and ")
    )

print(solve_boolean())