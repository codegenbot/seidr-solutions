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
                result &= (expression[0] == 't')
            elif char == '|':
                result |= (expression[0] == 't')
            expression = expression[1:]
        return result