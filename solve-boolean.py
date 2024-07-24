```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid expression')
    else:
        if '&' in expression:
            return not (expression[0] == 'f' and expression[-1] == 'f')
        elif '|' in expression:
            return expression[0] != 'f' or expression[-1] != 'f'
        elif expression[0] == 't':
            return True
        else:
            return False