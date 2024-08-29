def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid expression')
    elif '&' in expression:
        parts = expression.split('&')
        return all(solve.Boolean(part) for part in parts)
    elif '|' in expression:
        parts = expression.split('|')
        return any(solve.Boolean(part) for part in parts)