def solve_boolean(expression):
    result = True
    for char in expression:
        if char == 'F':
            return False
        elif char == '&':
            result &= all(c == 'T' for c in expression[expression.index(char) + 1:])
        elif char == '|':
            result |= any(c == 'T' for c in expression[:expression.index('|')])
    return result