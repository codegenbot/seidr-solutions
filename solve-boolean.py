```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        return evaluate_and(expression)
    elif '|' in expression:
        return evaluate_or(expression)

def evaluate_and(expression):
    parts = expression.split('&')
    for part in parts:
        if part != 'F':
            return False
    return True

def evaluate_or(expression):
    parts = expression.split('|')
    for part in parts:
        if part == 'T':
            return True
    return False