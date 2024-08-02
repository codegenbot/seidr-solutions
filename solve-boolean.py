```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    result = None
    for operation in expression.split():
        if operation == 't':
            temp = True
        elif operation == 'f':
            temp = False
        elif operation == '&':
            result = temp and (temp := False)
        elif operation == '|':
            result = temp or (temp := False)
    return result