```
def solve_boolean(expression):
    stack = []
    result = True
    operation = None
    
    for char in expression:
        if char.strip() in ['T', 'F']:
            if stack and stack[-1] == 'f' and (char == 'T' or char == 't'):
                stack.pop()
            stack.append(char.lower() == 't')
        elif char in ['&', '|']:
            while len(stack) >= 2:
                value2 = stack.pop()
                value1 = stack.pop() if stack else True
                if operation == '&':
                    result = result and (value1 and value2)
                elif operation == '|':
                    result = result or (value1 or value2)
            operation = char
            
    return result