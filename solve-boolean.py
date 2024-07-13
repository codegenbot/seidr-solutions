def solve_boolean(s):
    stack = []
    for c in s[::-1]:
        if c == 'T':
            stack.append(True)
        elif c == 'F':
            stack.append(False)
        elif c == '&':
            stack.append(stack.pop() and stack.pop())
        elif c == '|':
            stack.append(stack.pop() or stack.pop())