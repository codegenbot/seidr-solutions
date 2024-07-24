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
        for op, val in zip(['&', '|'], [expression.count('&'), expression.count('|')]):
            if val % 2 != 0:
                result = not result
            expression = expression.replace(op + val // 2 * (val // 2 + 1), '')
        return result