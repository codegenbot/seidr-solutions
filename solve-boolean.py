def solve_boolean(expression):
    return eval(expression.replace("F", "False").replace("T", "True"))


input_expression = input().strip()
result = solve_boolean(input_expression)
print(result)