def solve_boolean(expression):
    if not expression:
        return False
    if '&&' in expression or '||' in expression:
        left = expression[:expression.index('&') | expression.index('|')]
        right = expression[expression.index('&') + 1:]
        return (solve_boolean(left) and solve.Boolean(right)) if '&' in expression else (solve_boolean(left) or solve.Boolean(right))
    elif expression == 'T':
        return True
    elif expression == 'F':
        return False
    else:
        return bool(expression)