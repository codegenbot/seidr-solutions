Here is the solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        parts = expression.split('&')
        for part in parts:
            if part != 'f' and part != 'F':
                return False
        return True
    elif '|' in expression:
        parts = expression.split('|')
        for part in parts:
            if part != 'f' and part != 'F':
                return True
        return False