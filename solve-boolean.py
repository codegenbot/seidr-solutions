def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    result = None
    for char in expression:
        if char == '&':
            result = result and (expression[0] == 'T')
        elif char == '|':
            result = result or (expression[0] == 'T')
            expression = expression[1:]
        else:
            result = char == 'T'
    return result