def solve_boolean(expression):
    operations = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    temp_stack = []
    for char in expression + '&':
        if char == '(':
            temp_stack.append(stack[:])
            stack.append(0)
        elif char in 'TF':
            stack.append(char == 'T')
        elif char in '&|':
            while len(temp_stack) > 1 and temp_stack[-2][0] == 0:
                op = '&' if temp_stack[-1][-1] == '&' else '|'
                stack.pop()
                temp_stack[-2].pop()
                stack.append(operations[op](*temp_stack[-2]))
            temp_stack.append([stack, []])
        elif char == ')':
            result = stack[-1]
            stack.pop()
            while len(temp_stack) > 1:
                stack.pop()