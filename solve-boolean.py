def solve_boolean(expression):
    result = True
    temp = True

    for char in expression:
        if char == 't':
            temp = True
        elif char == 'f':
            temp = False
        else:
            if char == '&':
                result = result and temp
            elif char == '|':
                result = result or temp
            temp = True  # Reset temp for the next operation

    return result