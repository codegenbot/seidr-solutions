def solve_boolean(expression):
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    for char in expression:
        if char in 'TF':
            if char == '(':
                stack.append(char)
            elif char == ')':
                while stack[-1] != '(':
                    stack.append(ops[stack.pop()](stack.pop(), stack.pop()))
                stack.pop()
            else:
                stack.append(True if char == 'T' else False)
        elif char in ops:
            while stack and (char == ')' or stack[-1] in ops):
                if stack[-1] == '(':
                    break
                stack.append(ops[stack.pop()](stack.pop(), stack.pop()))
            stack.append(char)

    return reduce(lambda x, y: ops[y](x, stack.pop()), [op for op in ops if op in stack], stack.pop())