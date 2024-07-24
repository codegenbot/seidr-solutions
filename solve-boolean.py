```
def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    result = True
    operator = ''
    for char in expression:
        if char in '&|':
            operator = char
        elif char == 't' or char == 'f':
            if operator == '&':
                result &= (char == 't')
            elif operator == '|':
                result |= (char == 't')
            operator = ''
    return result