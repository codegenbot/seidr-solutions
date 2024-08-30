```
def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        a, b = expression.split('&')
        return solveBoolean(a) and solveBoolean(b)
    else:
        a, b = expression.split('|')
        return solveBoolean(a) or solveBoolean(b)

expression = input()
print(solveBoolean(expression))