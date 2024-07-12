def solve_boolean(expression):
    expression = expression.replace("t", "True").replace("f", "False")
    return eval(expression.replace("|", " or ").replace("&", " and ").replace(" or ", ") or (").replace(" and ", ") and ("))

input_expression = input().lower()
result = solve_boolean(input_expression)
print(result)