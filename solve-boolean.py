def solve_boolean(expression):
    stack = []
    result = True
    
    for char in expression:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                if stack[-1] == 'F':
                    result = not result
                stack.pop()
            stack.pop()
        elif char in ['|', '&']:
            while stack and stack[-1] in ['|', '&']:
                if stack[-1] == '&':
                    result = result & (char == 'T')
                else:
                    result = result | (char == 'T')
                stack.pop()
            stack.append(char)
        elif char != 'T' and char != 'F':
            stack.append(char)
    
    return result