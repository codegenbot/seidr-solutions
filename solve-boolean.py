```
def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solveBoolean(left) and solveBoolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solveBoolean(left) or solveBoolean(right)