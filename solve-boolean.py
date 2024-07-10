def solve_boolean(expression):
    result = True
    for char in expression:
        if char == 'F':
            return False
        elif char == '&':
            result &= (char != 'T')
        elif char == '|':
            result |= (char != 'T')
    return result