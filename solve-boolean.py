def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False"))


# Read input
expression = input()

# Output result
print(solve_boolean(expression))