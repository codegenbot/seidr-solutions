def solve_boolean(expression):
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    for char in expression:
        if char in 'TF':
            if char == '(':
                stack.append(char)
            elif char == ')':
                while stack[-1] != '(':
                    while len(stack) >= 2 and (stack[-1] in ops or stack[-1] == '('):
                        if stack[-1] == '(':
                            break
                        right = stack.pop()
                        operator = stack.pop()
                        left = stack.pop()
                        if operator == '&':
                            result = ops[operator](left, right)
                        else:
                            result = ops[operator](left, right)
                        while stack and stack[-1] in ops:
                            pass
                        stack.append(result)
                    stack.pop()
            else:
                stack.append(True if char == 'T' else False)
        elif char in ops:
            stack.append(char)

    return stack.pop()