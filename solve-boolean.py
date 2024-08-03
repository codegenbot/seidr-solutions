def solve_boolean(expression):
    stack = []
    for char in expression[::-1]:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            right = stack.pop()
            left = stack.pop()
            stack.append(left or right)
        elif char == '&':
            right = stack.pop()
            left = stack.pop()
            stack.append(left and right)
    return stack[0]