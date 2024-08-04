def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    elif '&' in expression:
        parts = expression.split('&')
        return all(solve_boolean(part.strip()) for part in parts)
    elif '|' in expression:
        parts = expression.split('|')
        return any(solve_boolean(part.strip()) for part in parts)