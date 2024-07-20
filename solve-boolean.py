def solve_boolean(expression):
    stack = []
    result = True
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '&':
            if len(stack) < 2:
                return False
            second, first = stack.pop(), stack.pop()
            stack.append(first and second)
        elif char == '|':
            if len(stack) < 2:
                return stack[0]
            second, first = stack.pop(), stack.pop()
            stack.append(first or second)
    return stack[0]