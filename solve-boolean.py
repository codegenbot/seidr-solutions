def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False"))


input_expression = input()
print(solve_boolean(input_expression))