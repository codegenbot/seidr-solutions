def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")
    return eval(expression)


expression = input()
result = solve_boolean(expression)
print(result)