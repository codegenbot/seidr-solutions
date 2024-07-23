```
import ast

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    while ' && ' in expression or ' || ' in expression:
        if ' && ' in expression:
            left, right = expression.split(' && ')
            expression = f"({str(bool(solve_boolean(left)))} and {str(bool(solve_boolean(right)))})"
        elif ' || ' in expression:
            left, right = expression.split(' || ')
            expression = f"({str(bool(solve_boolean(left)))} or {str(bool(solve_boolean(right)))})"

    result = True
    for operator in '|&':
        for operand in expression.split(operator):
            result = (operator == '&') and result and bool(solve_boolean(operand)) or not result and any(bool(solve_boolean(op)) for op in operand.split(' & '))
            if not result:
                break
    return result