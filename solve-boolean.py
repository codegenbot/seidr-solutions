```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    else:
        result = True
        for op, val in zip(['&', '|'], [False, True]):
            if op == '&':
                result = result and val == expression[0]
            elif op == '|':
                result = result or val == expression[0]
            expression = expression[1:]
        return result