Here is the solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        a, b = map(solve_boolean, expression.split('&'))
        return a and b
    elif '|' in expression:
        a, b = map(solve_boolean, expression.split('|'))
        return a or b