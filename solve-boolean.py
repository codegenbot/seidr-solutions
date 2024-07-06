```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        parts = expression.split('&')
        for part in parts:
            or_parts = part.split('|')
            for p in or_parts:
                if p == 'F':
                    result = False
                    break
                elif p != 'T':
                    return False
        return result