def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    else:
        result = True if expression[0] == 'T' else False
        for op, val in zip(['&', '|'], [expression.index(op), expression.rindex(op)]):
            if op == '&':
                result = result and (val == 1)
            elif op == '|':
                result = result or (val == 1)
        return result