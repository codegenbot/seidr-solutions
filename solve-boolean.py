```
def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= True
            elif char == '|':
                result |= True
            elif char == 't':
                result &= True
            elif char == 'f':
                result = False
        return result