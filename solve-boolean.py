def solve_boolean(expression):
    return eval(f'({expression.replace("T", "True").replace("F", "False")})')

input_str = input()
print(solve_boolean(input_str))