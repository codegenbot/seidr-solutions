def solve_boolean(expression):
    stack = []
    i = 0

    while i < len(expression):
        if expression[i] == 't' or expression[i] == 'f':
            stack.append(expression[i])
        elif expression[i] == '|':
            stack.append(stack.pop() or stack.pop())
        elif expression[i] == '&':
            stack.append(stack.pop() and stack.pop())
        i += 1

    return stack[0] if stack else None