```
def solve_boolean(expression):
    result = True
    for char in expression:
        if char == 'T':
            result = True
        elif char == 'F':
            result = False
        elif char == '&':
            result = result and True
        elif char == '|':
            result = result or True
    return result