def solveBoolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        parts = expression.split('&')
        return all(solveBoolean(part) for part in parts)
    elif '|' in expression:
        parts = expression.split('|')
        return any(solveBoolean(part) for part in parts)