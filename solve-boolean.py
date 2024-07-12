def solve_boolean(expression):
    operators = {'T': True, 'F': False, '|': or, '&': and}
    for key, value in operators.items():
        expression = expression.replace(key, str(value))
    return eval(expression)

input_str = input().strip()
print(solve_boolean(input_str))