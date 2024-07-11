def solve_boolean(expression):
    return eval(expression.replace("F", "False").replace("T", "True"))

# Read input from user
input_expression = input().strip()
result = solve_boolean(input_expression)
print(result)