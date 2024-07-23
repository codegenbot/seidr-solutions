def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in {'T', 'F'}:
            stack.append(char == 'T')
        elif char in {'&', '|'}:
            while len(stack) > 1 and ((stack[-1] and '&' == char) or (not stack[-1] and '|' == char)):
                stack.pop()
    return all(stack)