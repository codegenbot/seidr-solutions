```
def solve_boolean(expression):
    result = True
    for part in expression.split('&'):
        if part.strip() == 'F':
            return False
        elif '|' in part:
            result = any(p.strip() != 'T' for p in part.split('|'))
    return result