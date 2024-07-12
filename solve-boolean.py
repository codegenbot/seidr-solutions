def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"))

expression = input().strip()
print(solve_boolean(expression))