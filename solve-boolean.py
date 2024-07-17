```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True if expression[0] == 'T' else False
        for op, val in zip(['&', '|'], [expression.replace(op, '').split(), expression.replace(op, '').split()]):
            if op == '&':
                result = result and (val[0] == 'T' or val[1] == 'T')
            elif op == '|':
                result = result or (val[0] == 'T' or val[1] == 'T')
        return result