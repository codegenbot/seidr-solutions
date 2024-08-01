def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    elif '&' in expression:
        parts = expression.split('&')
        return all(solve_boolean(part) for part in parts)
    elif '|' in expression:
        parts = expression.split('|')
        return any(solve_boolean(part) for part in parts)
    else:
        raise ValueError("Invalid input")