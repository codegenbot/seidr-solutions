```
def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True if expression[0] == 't' else False
        for op, val in zip(['&', '|'], [expression.find('&'), expression.find('|')]):
            if op in expression:
                result = (op == '&' and val % 2) or (op == '|' and not val % 2)
        return result