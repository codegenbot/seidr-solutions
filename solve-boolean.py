def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    result = None
    for char in expression:
        if char == '&':
            result = result and True if result is not None else False
        elif char == '|':
            result = result or True if result is not None else False
        elif char == 'T':
            result = True
        elif char == 'F':
            result = False
    return result