def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    else:
        parts = expression.split('&')
        result = True
        for part in parts:
            if part != 'f':
                result = result | (part == 't')
        return result