def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"))


# Read input from user
expression = input()
result = solve_boolean(expression)
print(result)