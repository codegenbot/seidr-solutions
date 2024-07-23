def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("True", "T").replace("False", "F"))

input_str = input()
print(solve_boolean(input_str))