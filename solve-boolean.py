def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return Boolean(left) and Boolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return Boolean(left) or Boolean(right)