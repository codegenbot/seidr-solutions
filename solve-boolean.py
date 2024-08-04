Here's the solution:

def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        parts = expression.split('&')
        for part in parts:
            if '|' in part:
                raise ValueError("Invalid expression")
            part = part.strip()
            if not part:
                continue
            if part[0] == 't':
                part = True
            elif part[0] == 'f':
                part = False
            else:
                raise ValueError("Invalid expression")
        return all(parts)