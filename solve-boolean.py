```
def solve_boolean(expression):
    result = True
    for char in expression:
        if char == 'T':
            pass
        elif char == 'F':
            return False
        elif char == '&':
            result = not char == 'T'
        elif char == '|':
            result = not all(char != 'T' for char in expression[:expression.index('|')])
    return result