def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solve.Boolean(left) and solve.Boolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solve.Boolean(left) or solve.Boolean(right)