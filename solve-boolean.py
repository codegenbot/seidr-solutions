def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        return all(part.lower() == 't' for part in expression.split('&'))
    elif '|' in expression:
        return any(part.lower() == 't' for part in expression.split('|'))