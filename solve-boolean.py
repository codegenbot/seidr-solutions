def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in {'T', 'F'}:
            while len(stack) > 1 and stack[-2] != 'T' and stack[-2] != 'F':
                stack.pop()
            stack.append(char == 'T')
        elif char in {'&', '|'}:
            ops = (char == '&') - (char == '|')
    return all(stack)