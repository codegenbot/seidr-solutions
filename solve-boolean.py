def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("True", "True").replace("False", "False"))


# Read input from user
expression = input()
result = solve_boolean(expression)
print(result)