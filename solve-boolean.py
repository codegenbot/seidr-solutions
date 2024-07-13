def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("&", "and").replace("|", "or"))

# Read input from user
expression = input()
print(solve_boolean(expression))