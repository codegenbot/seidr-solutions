def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False"))


# Read input from user
expression = input()
print(solve_boolean(expression))