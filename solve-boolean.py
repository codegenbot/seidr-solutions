def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False"))


expression = input().replace("T", "True").replace("F", "False")
print(solve_boolean(expression))