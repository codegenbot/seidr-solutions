def solve_boolean(expression):
    stack = []

    for char in expression:
        if char == 'T' or char == 'F':
            stack.append(char)
        elif char == '|':
            last = stack.pop()
            stack.append(last or stack.pop())
        elif char == '&':
            last = stack.pop()
            stack.append(last and stack.pop())

    return stack[0] == 'T'