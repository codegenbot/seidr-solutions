def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("&", "and").replace("|", "or"))

expression = input().upper()
print(solve_boolean(expression))