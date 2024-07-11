def solve_boolean(input_str):
    stack = []
    for char in input_str[::-1]:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '&':
            b1, b2 = stack.pop(), stack.pop()
            stack.append(b1 and b2)
        elif char == '|':
            b1, b2 = stack.pop(), stack.pop()
            stack.append(b1 or b2)
    return stack[0]