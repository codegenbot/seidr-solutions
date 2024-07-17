```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid operation')
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= bool(next(iter(set(expression.replace('&', '')))))
            elif char == '|':
                result |= bool(next(iter(set(expression.replace('|', ''))))))
        return result