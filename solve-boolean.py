def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['|', '&']:
            while len(stack) > 1 and stack[-2] is not None: 
                operator_value = stack.pop()
                stack.append({
                    '|': lambda x, y: x or y,
                    '&': lambda x, y: x and y
                }[char].__call__(stack.pop(), operator_value))
        elif char == '(':
            stack.append(None)
        elif char == ')':
            while len(stack) > 1 and stack[-2] is not None:
                stack.pop()
    return stack[0]