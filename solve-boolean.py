def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    while '(' in expression and ')' in expression:
        expression = expression.replace('(', '(False|')\
                           .replace(')', '|False)')
    if '&' in expression:
        left, right = expression.split('&')
        return solve_boolean(left) and solve_boolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solve_boolean(left) or solve_boolean(right)