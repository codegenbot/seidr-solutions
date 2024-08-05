def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        parts = expression.split('&')
        return not (any(s == 'T' for s in parts) if len(parts) > 1 else s != 'F')
    elif '|' in expression:
        parts = expression.split('|')
        return any(s == 'T' for s in parts) if len(parts) > 1 else s == 'T'
    else:
        raise ValueError("Invalid expression")