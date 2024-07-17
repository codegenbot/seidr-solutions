def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        a, b = expression.split('&')
        return not (bool(a) and bool(b))
    elif '|' in expression:
        a, b = expression.split('|')
        return bool(a) or bool(b)
    else:
        raise ValueError("Invalid expression")