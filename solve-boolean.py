def solve_boolean(expression):
    stack = []
    result = True if expression[0] == 'T' else False
    
    for char in expression:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                result = result ^ (stack.pop() == 'F')
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