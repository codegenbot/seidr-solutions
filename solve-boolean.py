def solve_boolean(expression):
    return eval(expression.replace("&", " and ").replace("|", " or ").replace("T", "True").replace("F", "False"))

result = solve_boolean('((f)|(f))&(t)')
print(result)