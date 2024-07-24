```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        parts = expression.split('&')
        if all(part == 'T' for part in parts):
            return True
        elif any(part == 'F' for part in parts):
            return False
        else:
            return True
    elif '|' in expression:
        parts = expression.split('|')
        if all(part == 'T' for part in parts):
            return True
        elif any(part == 'F' for part in parts):
            return False
        else:
            return True