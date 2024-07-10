```
def solve_boolean(expression):
    result = True
    for char in expression:
        if char == 'T':
            pass
        elif char == 'F':
            return False
        elif char == '&':
            result = not result
        elif char == '|':
            result = any(char != 'T' for char in expression[:expression.index('|')]+expression[expression.index('+1':)])
    return result