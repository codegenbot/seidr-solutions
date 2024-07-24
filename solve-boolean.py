```
def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= not (char == 'T')
            elif char == '|':
                result |= not (char == 'T')
        return bool(result)