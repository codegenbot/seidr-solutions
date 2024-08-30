def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid expression')
    else:
        result = True
        parts = expression.split('&')
        for part in parts:
            if not part.strip():
                continue
            if '|' in part:
                result = any(solve_boolean(p) for p in part.split('|'))
            else:
                result = result and solve_boolean(part)
        return result