```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        a, b = expression.split('&')
        return bool(solve_boolean(a)) and bool(solve_boolean(b))
    elif '|' in expression:
        a, b = expression.split('|')
        return bool(solve_boolean(a)) or bool(solve_boolean(b))