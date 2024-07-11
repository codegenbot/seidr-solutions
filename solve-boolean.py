def solve_boolean(expression):
    replaced_expression = expression.replace("&", " and ").replace("|", " or ")
    return eval(replaced_expression)


# Read input from user
expression = input()
result = solve_boolean(expression)
print(result)