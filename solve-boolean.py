```
def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['|', '&']:
            b1, b2 = stack.pop(), stack.pop()
            stack.append(b1 and b2) if char == '&' else stack.append(b1 or b2)
    return stack[0]