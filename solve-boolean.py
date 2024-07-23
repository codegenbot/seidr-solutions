```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    stack = []
    for char in expression:
        if char == '&':
            stack.append('&')
        elif char == '|':
            stack.append('|')
        else:
            stack.append(char)
    result = None
    while stack:
        op = stack.pop()
        if op == '&':
            left, right = bool(stack.pop()), bool(stack.pop())
            result = left and right
        elif op == '|':
            left, right = bool(stack.pop()), bool(stack.pop())
            result = left or right
    return result