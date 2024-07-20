```
def solve_boolean(expression):
    stack = []
    result = True
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '&':
            first, second = stack.pop(), stack.pop()
            stack.append(first and second)
        elif char == '|':
            first, second = stack.pop(), stack.pop()
            stack.append(first or second)
    return stack[-1]