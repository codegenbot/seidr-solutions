def solve_boolean(expression):
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    for char in expression:
        if char in 'TF':
            if current_number:
                stack.append(True if char == 'T' else False)
                current_number = ''
            elif stack and stack[-1] in ops.values():
                while stack and isinstance(stack[-1], bool):
                    stack.pop()
                stack.append(ops['&' if char == 'T' else '|'][True, True])
        elif char in ops:
            while stack and isinstance(stack[-1], bool):
                stack.pop()
            if current_number:
                stack.append(True if char == 'T' else False)
                current_number = ''
            b = ops[char](stack.pop(), stack.pop())
            stack.append(b)
        else:
            if char == '|':
                stack = []
            current_number += char
    return stack[0]