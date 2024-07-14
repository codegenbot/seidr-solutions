def solve_boolean(expression):
    def evaluate(expression):
        if expression[0] in ['T', 'F']:
            return expression[0] == 'T'
        elif len(expression) > 1 and expression[1] in ['&', '|']:
            if expression[1] == '&':
                return evaluate(expression[:2]) and evaluate(expression[2:])
            else:
                return evaluate(expression[:2]) or evaluate(expression[2:])
        else:
            raise ValueError("Invalid expression")
    stack = []
    result = True
    
    for char in expression:
        if char.strip() in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['&', '|']:
            while len(stack) >= 2 and (stack[-1] is not None or stack[-2] is not None):
                value2 = stack.pop()
                value1 = stack.pop() if stack else True
                result = result and (value1 and value2) if char == '&' else result or (value1 or value2)
            stack.append(result)
        else:
            raise ValueError("Invalid expression")
            
    while stack:
        result = stack.pop()
        
    return result