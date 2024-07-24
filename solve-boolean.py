```
def solve_boolean(expression):
    if expression == 't':
        result = True
    elif expression == 'f':
        result = False
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= (char == 't')
            elif char == '|':
                result |= (char == 't')
    return result