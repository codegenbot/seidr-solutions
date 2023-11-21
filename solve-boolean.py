def solve_boolean(expression):
    result = False
    curr_op = None

    for char in expression:
        if char == 't':
            if curr_op == '|' or curr_op == None:
                result = True
                break
            elif curr_op == '&':
                continue
        elif char == 'f':
            if curr_op == '|' or curr_op == None:
                continue
            elif curr_op == '&':
                result = False
                break
        elif char == '|':
            curr_op = '|'
        elif char == '&':
            curr_op = '&'

    return result