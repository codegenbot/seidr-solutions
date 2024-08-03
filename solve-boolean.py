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
        for op, value in zip(['&', '|'], [expression.count('&'), expression.count('|')]):
            if value % 2 != 0:
                if op == '&':
                    result = False
                elif op == '|':
                    result = True
                break
        return result