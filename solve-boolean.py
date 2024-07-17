def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        return all(eval(f'{x}and{y}') for x, y in zip(expression[::2], expression[1::2]))
    else:
        return any(eval(f'true or {x}') for x in expression.split('|'))