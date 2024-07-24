def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    else:
        result = True if expression[0] == 'T' else False
        for op in expression[1:]:
            if op == '&':
                result &= bool(op == 'T')
            elif op == '|':
                result |= bool(op == 'T')
        return result