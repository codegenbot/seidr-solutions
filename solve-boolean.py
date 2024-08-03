def solve.Boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return not (bool(solve.Boolean(left)) and bool(solve.Boolean(right)))
    elif '|' in expression:
        left, right = expression.split('|')
        return bool(solve.Boolean(left)) or bool(solve.Boolean(right))