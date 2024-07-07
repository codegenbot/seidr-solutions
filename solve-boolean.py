```
import re

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    if '&' in expression or '|' in expression:
        parts = re.split('(&+|\\||\\(|\\))', expression)
        for i, part in enumerate(parts[1:-1]):
            if part.startswith('&'):
                result = solve_boolean(parts[i-1]) and solve_boolean(parts[i])
            elif part == 'T':
                result = True
            elif part == 'F':
                result = False
            else:
                raise ValueError("Invalid boolean expression")
        return result
    return expression.lower() == 't'