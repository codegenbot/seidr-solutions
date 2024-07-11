def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '&':
            result1 = stack.pop()
            result2 = stack.pop()
            stack.append(result1 and result2)
        elif char == '|':
            result1 = stack.pop()
            result2 = stack.pop()
            stack.append(result1 or result2)
    return stack[0]