def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise Exception("Invalid expression")
    elif '&' in expression:
        return all(solve_boolean(c) for c in expression.split('&'))
    elif '|' in expression:
        return any(solve_boolean(c) for c in expression.split('|'))