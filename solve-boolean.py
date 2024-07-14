```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    result = expression[0]
    for char in expression[1:]:
        if char == '&':
            result = result and (expression[1] == 'T')
        elif char == '|':
            result = result or (expression[1] == 'T')
    return result