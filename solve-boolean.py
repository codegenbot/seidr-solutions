def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False"))


expression = input()
print(solve_boolean(expression))