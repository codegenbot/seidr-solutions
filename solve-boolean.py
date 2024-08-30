```
def solve_boolean(expression):
    result = True
    for char in expression:
        if char == '&':
            result &= bool(char == 'T')
        elif char == '|':
            result |= bool(char == 'T')
    return result