def solve_boolean(expression):
    return eval("(" + expression.replace('T', 'True').replace('F', 'False').replace('&', ' and ').replace('|', ' or ') + ")",
                {"or": lambda x, y: bool(x) or bool(y), "and": lambda x, y: bool(x) and bool(y)})

result = solve_boolean('F|F&F&T|F|F&T')
print(result)