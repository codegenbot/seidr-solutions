def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    for char in expression:
        if char in ops:
            b = ops[char](stack.pop(), stack.pop())
            stack.append(b)
        else:
            stack.append(True if char == 'T' else False)
    return stack[0]