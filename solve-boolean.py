def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        a, b = expression.split('&')
        return bool(solve.Boolean(a)) and bool(solve.Boolean(b))
    elif '|' in expression:
        a, b = expression.split('|')
        return bool(solve.Boolean(a)) or bool(solve.Boolean(b))