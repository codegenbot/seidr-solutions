def solve_boolean(expression):
    boolean_map = {'T': 'True', 'F': 'False', 't': 'True', 'f': 'False', '|': 'or', '&': 'and'}
    for key, value in boolean_map.items():
        expression = expression.replace(key, value)
    return eval(expression)

input_expression = input("Enter a Boolean expression: ")
print(solve_boolean(input_expression))