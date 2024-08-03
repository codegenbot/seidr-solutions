```
def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid input. Only one of '&', '|' is allowed.")
    elif '&' in expression:
        return all(x == 'T' for x in expression.split('&'))
    else:
        return any(x == 'T' for x in expression.split('|'))