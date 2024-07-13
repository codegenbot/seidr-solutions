def solve_boolean(expression):
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    temp_stack = []
    
    for char in expression:
        if char != ' ':
            if char in 'TF':
                stack.append('T' if char == 'T' else 'F')
            elif char == '(':
                temp_stack.append(char)
            elif char == ')':
                while temp_stack and temp_stack[-1] != '(':
                    stack.append(ops[stack.pop()](stack.pop(), stack.pop()))
                temp_stack.pop()
            elif char in ops:
                while (temp_stack and temp_stack[-1] in ops) or (stack and stack[-1] in ops):
                    if temp_stack and temp_stack[-1] == '(':
                        break
                    stack.append(ops[stack.pop()](stack.pop(), stack.pop()))
                stack.append(char)
    
    while len(stack) > 1:
        stack.append(ops[stack.pop()](stack.pop(), stack.pop()))
    
    while temp_stack:
        if temp_stack[-1] != '(':
            stack.append(ops[stack.pop()](stack.pop(), stack.pop()))
        else:
            temp_stack.pop()
    
    return stack.pop()