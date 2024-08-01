def solveBoolean(expression):
    stack = []
    for char in expression:
        if char in ['|', '&']:
            second = stack.pop()
            first = stack.pop()
            if char == '|':
                stack.append(bool(first) or bool(second))
            else:
                stack.append(bool(first) and bool(second))
        elif char in ['T', 't']:
            stack.append(True)
        elif char in ['F', 'f']:
            stack.append(False)
    return stack[0]