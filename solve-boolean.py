def solve_boolean(expr):
    return eval(expr.replace("T", "True").replace("F", "False"))


input_expr = input()
print(solve_boolean(input_expr))