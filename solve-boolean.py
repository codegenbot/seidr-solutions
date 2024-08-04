def solve_boolean(expression):
    return eval(expression.replace("f", "False").replace("t", "True").replace("|", "or").replace("&", "and"))

expression = input()
print(solve_boolean(expression))