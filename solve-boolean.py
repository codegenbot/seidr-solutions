```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for op, val in zip(['&', '|'], [expression.split(op)[0], expression.split(op)[1]]):
            if (op == '&') ^ (val == 'T'):
                result = False
                break
        return result