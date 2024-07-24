Here is the completed code:

def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid operation')
    elif '&' in expression:
        parts = expression.split('&')
        for part in parts:
            if part != 'F':
                return False
        return True
    elif '|' in expression:
        parts = expression.split('|')
        for part in parts:
            if part != 'F':
                return True
        return False