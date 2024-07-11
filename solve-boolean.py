def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("t", "True"))

expression = input()
print(solve_boolean(expression))