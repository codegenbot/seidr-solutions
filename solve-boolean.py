def solve_boolean(expression):
    return eval(expression.lower())

expression = input()
print(solve_boolean(expression))