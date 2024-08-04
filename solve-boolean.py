def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        operands = expression.split('&')
        for operand in operands:
            if 'T' in operand or 't' in operand:
                return True
            elif 'F' in operand or 'f' in operand:
                return False
    elif '|' in expression:
        operands = expression.split('|')
        for operand in operands:
            if 'T' in operand or 't' in operand:
                return True
            elif 'F' in operand or 'f' in operand:
                return True