def solve_boolean(expression):
    stack = []
    result = True
    operation = None
    
    for char in expression:
        if char.strip() in ['T', 'F']:
            stack.append(char)
        elif char in ['&', '|']:
            value2 = stack.pop() == 'T'
            while len(stack) >= 1 and (stack[-1] is not None or stack[-1] is not None):
                value1 = stack.pop() == 'T' if stack else True
                if operation == '&':
                    result = result and (value1 and value2)
                elif operation == '|':
                    result = result or (value1 or value2)
            if operation == '|':
                stack.append(result)
            operation = char
        else:
            raise ValueError("Invalid expression")
            
    return result