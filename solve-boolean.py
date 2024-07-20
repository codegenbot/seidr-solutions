def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char == '|':
            a, b = stack.pop(), stack.pop()
            stack.append(a and b)
        elif char == '&':
            a, b = stack.pop(), stack.pop()
            stack.append(a or b)
    return stack[0]