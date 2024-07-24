def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid expression')
    else:
        result = True if expression[0] == 'T' else False
        for op, value in zip(['&', '|'], [expression.count('&'), expression.count('|')]):
            if op == '&' and value % 2 != 0:
                result = False
            elif op == '|' and value % 2 == 0:
                result = False
        return result