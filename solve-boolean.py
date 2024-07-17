```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid input')
    else:
        result = True
        for char in expression:
            if char == '&':
                result = result and bool(char == '&')
            elif char == '|':
                result = result or bool(char == '|')
        return result