solve_boolean = lambda expression: eval(expression.replace("T", "True").replace("F", "False").replace("|", "or").replace("&", "and"))

print(solve_boolean(input()))