```
def solve_boolean(expression):
    if not isinstance(expression, str):
        raise ValueError("Invalid input")
    expression = expression.upper()
    result = True
    op = ''
    stack = []
    
    for char in expression:
        if char in 'TF':
            if op == '&':
                result &= (char == 'T')
            elif op == '|':
                result |= (char == 'T')
            else:
                stack.append(char)
        elif char in '&|':
            while len(stack) > 0 and stack[-1] != '(':
                if char == '&' and stack[-1] == '|':
                    raise ValueError("Invalid operation")
                result = (stack.pop() == 'T') if op == '&' else (stack.pop() == 'F')
                op = char
            stack.append(char)
        elif char == '(':
            stack.append('(')
        elif char == ')':
            while len(stack) > 0 and stack[-1] != '(':
                result = (stack.pop() == 'T') if op == '&' else (stack.pop() == 'F')
                op = ''
            stack.pop()
    
    return result