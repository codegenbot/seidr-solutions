def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False"))


input_exp = input()
print(solve_boolean(input_exp))