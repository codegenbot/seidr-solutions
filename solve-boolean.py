def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for part in expression.split('&'):
            if '|' in part:
                raise ValueError("Invalid expression")
            part = part.strip()
            if part:
                if part == 'T':
                    result = True
                elif part == 'F':
                    return False
                else:
                    raise ValueError("Invalid expression")
        return result