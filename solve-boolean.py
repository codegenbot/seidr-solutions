```
def solve_boolean(expression):
    result = True
    while '&' in expression:
        parts = expression.split('&')
        expression = ' & '.join([p for p in parts if any(c != 'F' for c in p.replace('|', '&').split())]) + '&'
    return 'T' if all(c != 'F' for c in expression.replace('&', '').replace('|', '').split()) else 'F'