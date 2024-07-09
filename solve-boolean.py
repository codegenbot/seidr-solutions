def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False", 1))

input_str = input()
print(solve_boolean(input_str))