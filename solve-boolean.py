def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"))


# Read input from user
expression = input()
print(solve_boolean(expression))