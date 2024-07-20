def solve_boolean(expression):
    stack = []
    ops = {'&': lambda a, b: a and b, '|': lambda a, b: a or b}
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['|', '&']:
            while len(stack) >= 2 and stack[-1] and char == '&':
                stack.pop()
            if stack and (not stack[-1] or char == '|'):
                a = stack.pop()
                b = stack.pop()
                stack.append(ops[char](a, b))
        elif stack:
            break
    return 'T' if stack else 'F'