def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"))


# Read input from user
input_expression = input().strip()
result = solve_boolean(input_expression)
print(result)