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
                result &= eval('True' if next_char == 't' else 'False')
            elif char == '|':
                result |= eval('True' if next_char == 't' else 'False')
            next_char = char
        return result