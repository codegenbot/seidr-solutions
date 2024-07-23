def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    while '(' in expression:
        expression = expression.replace('(', '(bool ').replace(')', ') )')

    while '&&' in expression:
        left, right = expression.split('&&')
        expression = str(bool(solve_boolean(left)) and bool(solve_boolean(right)))

    while '||' in expression:
        left, right = expression.split('||')
        expression = str(bool(solve_boolean(left)) or bool(solve_boolean(right)))

    return eval(f"({expression})")