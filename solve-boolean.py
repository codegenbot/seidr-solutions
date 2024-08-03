```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    elif '&' in expression:
        result = True
        for part in expression.split('&'):
            result = result and (part == 'T')
        return result
    else:
        result = False
        for part in expression.split('|'):
            result = result or (part == 'T')
        return result