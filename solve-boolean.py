def solve_boolean(expression):
    expression = expression.capitalize().replace('T', 'True').replace('F', 'False')
    return eval(expression)

expression = input()
print(solve_boolean(expression))