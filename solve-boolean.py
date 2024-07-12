def solve_boolean(expression):
    return eval(expression.replace("T", "true").replace("F", "false"))

# Read input from user
expression = input()
print(solve_boolean(expression))