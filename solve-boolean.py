```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    while '&&' in expression or '||' in expression:
        if '||' in expression:
            left, right = expression.split('||')
            expression = str(bool(solve_boolean(left)) or bool(solve_boolean(right)))
        elif '&&' in expression:
            left, right = expression.split('&&')
            expression = str(bool(solve_boolean(left)) and bool(solve_boolean(right)))

    return eval(expression)