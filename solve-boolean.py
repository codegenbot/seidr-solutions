def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("|", " or ").replace("&", " and"))

print(solve_boolean(input().strip()))