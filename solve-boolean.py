def solve_boolean(expression):
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    
    for char in expression:
        if char != ' ':
            if char in 'TF':
                stack.append('T' if char == 'T' else 'F')
            elif char == '(':
                stack.append(char)
            elif char == ')':
                while stack and stack[-1] != '(':
                    right = stack.pop()
                    op = stack.pop()
                    left = stack.pop()
                    stack.append(ops[op](left, right))
                stack.pop()  # Remove the (
            elif char in ops:
                while (stack and stack[-1] in ops) or (stack and stack[-1] == '('):
                    if stack and stack[-1] == '(':
                        break
                    right = stack.pop()
                    op = stack.pop()
                    left = stack.pop()
                    stack.append(ops[op](left, right))
                stack.append(char)
    
    while len(stack) > 1:
        right = stack.pop()
        op = stack.pop()
        left = stack.pop()
        stack.append(ops[op](left, right))
    
    return stack[0] if stack else 'T'