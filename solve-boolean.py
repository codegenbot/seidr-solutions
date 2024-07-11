def solve_boolean(expression):
    mapping = {'T': 'True', 'F': 'False', '|': 'or', '&': 'and'}
    return eval(' '.join(mapping.get(c, c) for c in expression))

print(solve_boolean(input()))