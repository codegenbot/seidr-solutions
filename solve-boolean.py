def solve_boolean(expression):
    result = True
    for char in expression:
        if char == 'T':
            pass
        elif char == 'F':
            return False
        elif char == '&':
            result &= not (expression[expression.index(char) + 1:] == 'T')
        elif char == '|':
            result |= any(char != 'T' for char in expression[:expression.index('|')])
    return result