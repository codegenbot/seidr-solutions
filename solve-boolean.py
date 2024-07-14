```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    if expression.startswith('&'):
        expression = expression[1:]
        return False
    if expression.endswith('&'):
        expression = expression[:-1]
        return False
    if expression.startswith('|'):
        expression = expression[1:]
        return True
    if expression.endswith('|'):
        expression = expression[:-1]
        return True
    elif '&' in expression:
        left, right = expression.split('&')
        return solve_boolean(left) and solve_boolean(right)
    else:
        left, right = expression.split('|')
        return solve_boolean(left) or solve_boolean(right)