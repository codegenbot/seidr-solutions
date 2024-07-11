def solve_boolean(expr):
    return eval(expr.replace("T", "True").replace("F", "False"))


# Read input
expr = input().strip()

# Call the function and print the result
print(solve_boolean(expr))