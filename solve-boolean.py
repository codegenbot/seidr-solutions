def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Expression")
    else:
        for op, val in zip(['&', '|'], [and_, or_]):
            if op in expression:
                expression = expression.replace(op, f"({val}('{expression}'".replace(val).f"))"
        return eval(expression)

def and_(a, b):
    return a and b

def or_(a, b):
    return a or b