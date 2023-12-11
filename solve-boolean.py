
def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            a = stack[-1]
            b = stack[-2]
            stack.pop(-1)
            stack.pop(-1)
            stack.append(a or b)
        elif char == '&':
            a = stack[-1]
            b = stack[-2]
            stack.pop(-1)
            stack.pop(-1)
            stack.append(a and b)
    return stack[-1]