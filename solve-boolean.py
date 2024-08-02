```
def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Expression")
    elif '&' in expression:
        result = True
        for char in expression:
            if char == '&':
                result &= (char == 'T')
        return result
    elif '|' in expression:
        result = False
        for char in expression:
            if char == '|':
                result |= (char == 'T')
        return result