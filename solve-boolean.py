def solve_boolean(expression):
    result = True
    curr_op = '&'

    for char in expression:
        if char == 't':
            if curr_op == '&':
                result = True
            elif curr_op == '|':
                continue
        elif char == 'f':
            if curr_op == '&':
                result = False
            elif curr_op == '|':
                continue
        elif char == '|':
            curr_op = '|'
        elif char == '&':
            curr_op = '&'

    return result