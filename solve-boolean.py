def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        return (expression[0] == 'T' or expression[2] == 'T') and (expression[1] == '&' or expression[3] == '&')
    elif '&' in expression:
        return expression[0] == 'T' and expression[1] == '&'
    elif '|' in expression:
        return expression[0] == 'T' or expression[1] == '|'
    else:
        return False