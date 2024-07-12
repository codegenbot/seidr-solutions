def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False"))


expression = input().strip()
print(solve_boolean(expression))