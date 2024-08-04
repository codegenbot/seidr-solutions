def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        operands = expression.split('&')
        for operand in operands:
            if operand != 'f':
                return False
        return False
    elif '|' in expression:
        operands = expression.split('|')
        for operand in operands:
            if operand != 'f':
                return True
        return False