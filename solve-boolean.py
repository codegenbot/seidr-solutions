def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '&':
            right = stack.pop()
            left = stack.pop()
            stack.append(left and right)
        elif char == '|':
            right = stack.pop()
            left = stack.pop()
            stack.append(left or right)
    return stack[0]