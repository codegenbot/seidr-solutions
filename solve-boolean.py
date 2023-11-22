def solve_boolean(expression):
    return eval(expression.capitalize())

expression = input()
result = solve_boolean(expression)
print(result)