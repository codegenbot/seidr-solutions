def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '&':
            a, b = stack.pop(), stack.pop()
            stack.append(a and b)
        elif char == '|':
            a, b = stack.pop(), stack.pop()
            stack.append(a or b)
    return stack[0]