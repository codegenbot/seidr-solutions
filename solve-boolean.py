```
def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= (char == 't')
            elif char == '|':
                result |= (char == 't')
        return result