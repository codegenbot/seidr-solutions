Here is the solution to the problem:

def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        a, b = expression.split('&')
        return solve.Boolean(a) and solve.Boolean(b)
    elif '|' in expression:
        a, b = expression.split('|')
        return solve.Boolean(a) or solve.Boolean(b)