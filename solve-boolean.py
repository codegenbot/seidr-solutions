```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        a, b = expression.split('&')
        return solve_boolean(a) and solve_boolean(b)
    elif '|' in expression:
        a, b = expression.split('|')
        return solve_boolean(a) or solve_boolean(b)
    else:
        return eval(' '.join(['T' if c == 'T' else 'F' for c in expression]))