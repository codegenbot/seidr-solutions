```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        expression = expression.replace('|', ' or ').replace('&', ' and ')
        result = eval(' '.join(map(str, expression.split())))
        return bool(result)