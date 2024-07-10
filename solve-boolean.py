def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for operation in expression.split():
            if operation == 'f':
                result = False
            elif operation == 't':
                result = True
            elif operation == '&':
                pass
            elif operation == '|':
                pass
        return result