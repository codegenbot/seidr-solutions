```
def solve.Boolean(expression):
    stack = []
    for char in expression[::-1]:
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['|', '&']:
            second = stack.pop()
            first = stack.pop()
            if char == '|':
                stack.append(first or second)
            else:
                stack.append(first and second)
    return stack[0]