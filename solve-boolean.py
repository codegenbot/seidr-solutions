def solve_boolean(expr):
    return eval(expr.replace("t", "True").replace("f", "False"))


expr = input()
print(solve_boolean(expr))