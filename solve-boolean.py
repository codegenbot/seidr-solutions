def solve_boolean(expression):
    return expression.lower() == "t" or expression.lower() == "true"


expression = input()
print(solve_boolean(expression))