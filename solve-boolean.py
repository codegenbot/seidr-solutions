def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        parts = expression.split('&')
        for part in parts:
            if '|' in part:
                raise ValueError("Invalid expression")
            if part == 'T':
                continue
            result = False
            break
        return result