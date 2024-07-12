import ast

def solve_boolean(expression):
    return ast.literal_eval(
        expression.replace("T", "True")
        .replace("F", "False")
        .replace("|", " or ")
        .replace("&", " and ")
    )

expression = input().strip()
print(solve_boolean(expression))