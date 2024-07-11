def solve_boolean(expression):
    return eval(expression.replace("F", "False").replace("T", "True"))


# Read input from user
expression = input()
result = solve_boolean(expression)
print(result)