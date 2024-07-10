```Python
def solve_boolean(expression):
    result = True
    for c in expression:
        if c == 'F':
            result = False
            break
        elif c == '|':
            result = not result
        elif c == '&':
            if not result:
                result = False
                break
    return result