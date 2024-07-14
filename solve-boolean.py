def solve_boolean(expression):
    stack = []
    operator_stack = []

    for char in expression:
        if char.strip() in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['&', '|']:
            while len(operator_stack) >= 1 and (operator_stack[-1] in ['&', '|']):
                op = operator_stack.pop()
                value2 = stack.pop()
                value1 = stack.pop() if stack else True
                result = value1 and value2 if op == '&' else value1 or value2
                stack.append(result)
            operator_stack.append(char)
        else:
            raise ValueError("Invalid expression")
            
    while len(operator_stack) >= 1:
        op = operator_stack.pop()
        value2 = stack.pop()
        value1 = stack.pop() if stack else True
        result = value1 and value2 if op == '&' else value1 or value2
        stack.append(result)
            
    return stack[0]