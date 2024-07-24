def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        parts = expression.split('&')
        for part in parts:
            if 'T' in part or any(c.isalpha() for c in part):
                return False
        return all(part == 'T' for part in parts)
    elif '|' in expression:
        parts = expression.split('|')
        for part in parts:
            if 'F' in part or any(c.isalpha() for c in part):
                return True
        return not any(part == 'T' for part in parts)