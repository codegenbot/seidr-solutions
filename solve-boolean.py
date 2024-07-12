def solve_boolean(expression):
    return eval(expression.replace("t", "T").replace("f", "F"))


input_str = input()
print(solve_boolean(input_str))