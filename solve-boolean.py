def solve_boolean(expression):
    mapping = {'T': 'True', 'F': 'False'}
    return eval(''.join(mapping.get(c, c) for c in expression))

input_expression = input()
print(solve_boolean(input_expression))