def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        return eval('and' + expression.replace('&', ' and').replace('|', ' or'))
    else:
        return eval(expression.replace('&', ' and').replace('|', ' or'))