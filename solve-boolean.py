```
def solve_boolean(expression):
    result = True
    for char in expression:
        if char == 'F':
            return False
        elif char == '&':
            result &= (char != 'T')
        elif char == '|':
            result = not all(c == 'T' for c in expression[:expression.index('|')])
    return result