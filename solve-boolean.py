def solve_boolean(expression):
    result = True
    for char in expression:
        if char == 'T':
            pass
        elif char == 'F':
            return False
        elif char == '&':
            result &= all(char == 'T' for char in expression[expression.index(char) + 1:])
        elif char == '|':
            result |= any(char == 'F' for char in expression[:expression.index('|')])
    return result