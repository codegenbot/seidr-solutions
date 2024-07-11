def solve(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solve(left) and solve(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solve(left) or solve(right)

return {'T': True, 'F': False}[expression]