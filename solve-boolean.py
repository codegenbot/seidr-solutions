def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for operation, value in zip(['&', '|'], expression.replace('T', 'True').replace('F', 'False').split()):
            if operation == '&':
                result &= eval(value)
            elif operation == '|':
                result |= eval(value)
        return result