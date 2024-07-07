def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for op, val in zip(['&', '|'], [False, True]):
            if op in expression:
                if val:
                    result &= (expression == 'T')
                else:
                    result |= (expression == 'T')
        return result