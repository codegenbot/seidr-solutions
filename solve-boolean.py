def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False"))


input_str = input().strip()
print(solve_boolean(input_str))