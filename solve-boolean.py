```
def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in {'T', 'F'}:
            stack.append(char == 'T')
        elif char in {'&', '|'}:
            while len(stack) >= 2 and (stack[-1] == stack[-2]):
                stack.pop()
            stack.append(char == '&')
    return stack[0]