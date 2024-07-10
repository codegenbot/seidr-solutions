def solve_boolean(expression):
    result = True
    prev_op = None
    for char in expression:
        if char == 'T':
            pass
        elif char == 'F':
            result = False
        elif char == '&':
            prev_op = '&'
        elif char == '|':
            prev_op = '|'
        elif prev_op == '&':
            result = result and (char == 'T')
        elif prev_op == '|':
            result = result or (char != 'T')
    return result