def solve.Boolean(expression):
    stack = []
    for char in expression:
        if char in ['|', '&']:
            right = stack.pop()
            left = stack.pop()
            stack.append((left and right) if char == '&' else (left or right))
        elif char in ['T', 'F']:
            stack.append(char.upper() == 'T')
    return stack[0]