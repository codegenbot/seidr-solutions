```
def solve_boolean(expression):
    stack = []
    for char in reversed(expression):
        if char == '|':
            b1, b2 = stack.pop(), stack.pop()
            stack.append(b1 or b2)
        elif char == '&':
            b1, b2 = stack.pop(), stack.pop()
            stack.append(b1 and b2)
        elif char in ['T', 'F']:
            stack.append(char == 'T')
    return stack[0]