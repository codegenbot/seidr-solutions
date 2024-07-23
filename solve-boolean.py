def solve_boolean(expression):
    stack = []
    ops = 0
    for char in expression:
        if char in {'T', 'F'}:
            stack.append(char == 'T')
        elif char in {'&', '|'}:
            while len(stack) > 1 and stack[-2] != 'T' and stack[-2] != 'F':
                stack.pop()
            ops += (char == '&') - (char == '|')
    while stack:
        stack.pop()
    return any(stack)