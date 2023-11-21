def solve_boolean(expression):
    result = False
    curr_op = None

    for char in expression:
        if char == 't':
            if curr_op == '|':
                result = True
                break
            elif curr_op == '&':
                continue
            else:
                result = True
        elif char == 'f':
            if curr_op == '|':
                continue
            elif curr_op == '&':
                result = False
                break
            else:
                result = False
        elif char == '|':
            curr_op = '|'
        elif char == '&':
            curr_op = '&'

    return result