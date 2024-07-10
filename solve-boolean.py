```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Expression")
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= True
            elif char == '|':
                result |= True
            elif char in ['T', 'F']:
                result = (char == 'T')
        return result