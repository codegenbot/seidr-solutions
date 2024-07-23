def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    if '&' in expression:
        left, right = expression.split('&')
        return bool(solve_boolean(left)) & bool(solve_boolean(right))
    elif '|' in expression:
        left, right = expression.split('|')
        return bool(solve_boolean(left)) | bool(solve_boolean(right))

    return True