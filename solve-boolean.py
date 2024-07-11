def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False"))


input_expr = input()
print(solve_boolean(input_expr))