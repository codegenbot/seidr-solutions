```
def solve_boolean(expression):
    result = True
    parts = expression.split('&')
    for part in parts:
        or_parts = part.split('|')
        result &= all(p != 'F' for p in or_parts) | any(p == 'T' for p in or_parts)
    return result