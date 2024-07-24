def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solveBoolean(left) and solveBoolean(right)
    elif '|' in expression:
        while '| &' in expression:  
            expression = expression.replace('| &', '|')
        parts = expression.split('|')
        return any(solveBoolean(part) for part in parts)