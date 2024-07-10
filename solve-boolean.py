def solve_boolean(expression):
    result = True
    for c in expression:
        if c == 'F':
            result = False
            break
        elif c == '|' and result:
            result = False
        elif c == '&' and not result:
            result = False
    return result