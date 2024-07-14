Here is the modified code:

```
def solve_boolean(expression):
    stack = []
    result = True
    operation = None
    
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['&', '|']:
            while len(stack) >= 2 and (stack[-1] is not None or stack[-2] is not None):
                value2 = stack.pop()
                value1 = stack.pop() if stack else True
                if operation == '&':
                    result = result and (value1 and value2)
                elif operation == '|':
                    result = result or (value1 or value2)
            operation = char
        else:
            raise ValueError("Invalid expression")
            
    return result