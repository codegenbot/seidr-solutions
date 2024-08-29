def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        result = True
        for part in expression.split('&'):
            if not solve_boolean(part):
                result = False
                break
        return result
    elif '|' in expression:
        result = False
        for part in expression.split('|'):
            if solve_boolean(part):
                result = True
                break
        return result