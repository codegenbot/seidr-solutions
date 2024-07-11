def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False"))


# Read input from user
expression = input()
result = solve_boolean(expression)
print(result)