def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("True", "True").replace("False", "False"))

expression = input()
print(solve_boolean(expression))