```
import ast

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    while '&&' in expression or '||' in expression:
        if '&&' in expression:
            left, right = expression.split('&&')
            expression = f"({solve_boolean(left)} and {solve_boolean(right)})"
        elif '||' in expression:
            left, right = expression.split('||')
            expression = f"({solve_boolean(left)} or {solve_boolean(right)})"

    return eval(f"({'T' if solve_boolean(expression) else 'F'})")