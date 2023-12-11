def solve_boolean(expression):
    return eval(expression.replace('t', 'True').replace('f', 'False'))

result = solve_boolean("t|f|f&f&t&t&f")
print(result)