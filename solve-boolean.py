```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    else:
        expression = expression.replace('|', ' or ').replace('&', ' and ')
        result = eval(' '.join(map(str, expression.split())))
        return bool(result)