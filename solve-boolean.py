Here is the Python solution for the problem:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        return all(x == 'T' for x in expression.split('&'))
    elif '|' in expression:
        return any(x == 'T' for x in expression.split('|'))