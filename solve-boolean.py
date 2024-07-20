def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for operation in expression.split('&'):
            if operation != 'f':
                result = result | (operation == 't')
        return not result