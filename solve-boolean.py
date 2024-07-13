```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    if '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    result = None
    operator = ''
    for char in expression:
        if char in '&|':
            operator = char
        else:
            if result is None:
                result = (char == 'T')
            elif operator == '&':
                result &= (char == 'T')
            elif operator == '|':
                result |= (char == 'T')
            operator = ''
    return result