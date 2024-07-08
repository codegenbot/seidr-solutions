def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        return expression.split('&') == ['f']
    else:
        return '|' in expression or expression == 't'