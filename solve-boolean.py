def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    while '&' in expression or '|' in expression:
        if '&' in expression:
            left, right = expression.split('&', 1)
            expression = str(solveBoolean(left)) and right
        elif '|' in expression:
            left, right = expression.split('|', 1)
            expression = str(solveBoolean(left)) or right
    return str(expression).lower() == 'true'