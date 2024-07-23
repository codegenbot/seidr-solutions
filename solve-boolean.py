import ast

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    if '&' in expression:
        left, right = expression.split('&')
        result = solve_boolean(left) and solve_boolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        result = solve_boolean(left) or solve_boolean(right)

    return result