import ast
import sys

expression = sys.stdin.readline().rstrip()

def solve_boolean(expression):
    return ast.literal_eval(
        expression.replace("T", "True")
        .replace("F", "False")
        .replace("|", " or ")
        .replace("&", " and ")
    )

print(solve_boolean(expression))