```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        return evaluate_and(expression.split('&'))
    else:
        return evaluate_or(expression.split('|'))

def evaluate_and(parts):
    for part in parts:
        if not solve_boolean(part):
            return False
    return True

def evaluate_or(parts):
    for part in parts:
        if solve_boolean(part):
            return True
    return False