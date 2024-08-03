def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        a, b = expression.split('&')
        return Boolean(a) and Boolean(b)
    elif '|' in expression:
        a, b = expression.split('|')
        return Boolean(a) or Boolean(b)
    else:
        raise ValueError("Invalid expression")