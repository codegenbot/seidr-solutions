def solve_boolean(expression):
    return eval(expression.capitalize())

expression = input()
print(solve_boolean(expression))