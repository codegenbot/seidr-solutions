def solve_boolean(expression):
    boolean_map = {'T': 'True', 'F': 'False', '|': ' or ', '&': ' and '}
    for key, value in boolean_map.items():
        expression = expression.replace(key, value)
    return eval(expression)

input_str = input()
print(solve_boolean(input_str))