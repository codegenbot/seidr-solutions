def solve_boolean(expression):
    return eval("(" + expression.replace("T", "True").replace("F", "False").replace("|", "or").replace("&", "and") + ")")


expression = input()
result = solve_boolean(expression)
print(result)