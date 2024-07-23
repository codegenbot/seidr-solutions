def solve_boolean(expression):
    tokens = expression.split()
    result = True
    for token in tokens:
        if token == 'F':
            return False
        elif token == 'T':
            continue
        elif '&' in token:
            result &= token == 'T'
        elif '|' in token:
            result |= token == 'T'
    return result