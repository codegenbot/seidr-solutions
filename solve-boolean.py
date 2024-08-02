```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= (expression[:expression.index('&')] == 'T')
            elif char == '|':
                result |= (expression[:expression.index('|')] == 'T')
        return result