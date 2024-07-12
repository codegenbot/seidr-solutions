def solve_boolean(expression):
    expression = expression.replace("t", "True").replace("f", "False")
    return eval(expression.replace("|", " or ").replace("&", " and "))

input_expression = input().lower()
result = solve_boolean(input_expression)
print(result)