```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression or '|' in expression:
        if '&' in expression and not all(c in expression for c in '&') or '|' in expression and not all(c in expression for c in '|'):
            raise ValueError("Invalid expression")
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= 'T' == str(char)
            elif char == '|':
                result |= 'T' == str(char)
        return result