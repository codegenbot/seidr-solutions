def solve_boolean(expression):
    mapping = {'T': 'True', 'F': 'False'}
    expression = ''.join(mapping.get(char, char) for char in expression)
    return eval(expression)