def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Expression")
    else:
        result = True
        op = ''
        for char in expression:
            op += char
            if op == '&':
                result &= (bool(expression[expression.index(op) + 1]) if 'T' in expression else False)
                op = ''
            elif op == '|':
                result |= (bool(expression[expression.index(op) + 1]) if 'T' in expression else False)
                op = ''
        return result