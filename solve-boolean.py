def solve_boolean(expression):
    stack = []
    result = True
    operation = None
    
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['&', '|']:
            operation = char
            while stack and stack[-1] is not None:
                value2 = stack.pop()
                value1 = stack.pop() if stack else True
                if operation == '&':
                    result = result and (value1 or value2)
                elif operation == '|':
                    result = result or (value1 and value2)
        else:
            raise ValueError("Invalid expression")
            
    return result