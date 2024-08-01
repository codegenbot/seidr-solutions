def solve_boolean(expression):
    stack = []
    for char in expression[::-1]:
        if char == '&':
            a = stack.pop()
            b = stack.pop()
            stack.append(a and b)
        elif char == '|':
            a = stack.pop()
            b = stack.pop()
            stack.append(a or b)
        else:
            stack.append(char == 'T')
    return stack[0]