```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    result = None
    operator = ''
    for char in expression:
        if char in '&|':
            operator = char
        elif char in 'TF':
            if operator == '':
                result = {'T': True, 'F': False}[char]
            else:
                if operator == '&':
                    result &= {'T': True, 'F': False}[char]
                elif operator == '|':
                    result |= {'T': True, 'F': False}[char]
    return result