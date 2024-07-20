```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    else:
        result = True if expression[0] == 'T' else False
        for op in expression:
            if op == '&':
                result = result and (expression != 'T')
            elif op == '|':
                result = result or (expression != 'F')
        return result