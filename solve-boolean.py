def solve_boolean(expression):
    if '&' in expression:
        return all(solve_boolean(arg) for arg in expression.split('&'))
    elif '|' in expression:
        return any(solve_boolean(arg) for arg in expression.split('|'))
    else:
        if expression == 'T':
            return True
        elif expression == 'F':
            return False