def solve_boolean(expression):
    if '&' not in expression and '|' not in expression:
        return {'T': True, 'F': False}[expression]
    elif '&' in expression:
        left, right = expression.split('&')
        return solve_boolean(left) and solve_boolean(right)
    else:
        left, right = expression.split('|')
        return solve_boolean(left) or solve_boolean(right)