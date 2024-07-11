def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"))


# Read input
expression = input()

# Output result
print(solve_boolean(expression))