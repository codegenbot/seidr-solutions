def solve_boolean(expression):
    stack = []
    operator_stack = []
    precedence = {'&': 1, '|': 2}

    for char in expression:
        if char.strip() in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['&', '|']:
            while (operator_stack and
                   len(operator_stack) > 0 and
                   precedence.get(char, float('inf')) <=
                   precedence.get(operator_stack[-1], float('inf'))):
                op = operator_stack.pop()
                value2 = stack.pop()
                value1 = stack.pop() if stack else True
                result = value1 and value2 if op == '&' else value1 or value2
                stack.append(result)
            operator_stack.append(char)
        else:
            raise ValueError("Invalid expression")
            
    while len(operator_stack) > 0:
        op = operator_stack.pop()
        value2 = stack.pop()
        value1 = stack.pop() if stack else True
        result = value1 and value2 if op == '&' else value1 or value2
        stack.append(result)
            
    return stack[0]