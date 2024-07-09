def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False").replace("true", "True").replace("false", "False")
    return eval(expression)

input_str = input()
print(solve_boolean(input_str))