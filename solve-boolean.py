import ast

expression = input("Enter the boolean expression: ").strip()

def solve_boolean(expression):
    return ast.literal_eval(
        expression.replace("T", "True")
        .replace("F", "False")
        .replace("|", " or ")
        .replace("&", " and ")
    )

print(solve_boolean(expression))