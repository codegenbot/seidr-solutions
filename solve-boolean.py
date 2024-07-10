def solve_boolean(expression):
    stack = []
    for char in reversed(expression):
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char == '|':
            b2, b1 = stack.pop(), stack.pop()
            stack.append(b1 or b2)
        elif char == '&':
            b2, b1 = stack.pop(), stack.pop()
            stack.append(b1 and b2)
    return stack[0]