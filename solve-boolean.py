def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    while '&' in expression or '|' in expression:
        left, right = expression.split('(' + expression[0] + ')')
        expression = str((solve_boolean(left) and solve_boolean(right)) if expression[0] == '&' else (solve_boolean(left) or solve_boolean(right)))
    return expression == 'T'