def solve_boolean(expression):
    result = True
    op = ''
    for char in expression:
        if char in ['&', '|']:
            if op == '&':
                result = result and bool(eval(op + 'T'))
            elif op == '|':
                result = result or bool(eval(op + 'F'))
            op = char
        else:
            op = char
    return result