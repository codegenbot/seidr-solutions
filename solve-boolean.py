def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack[-1] != '(':
                last_operator = stack.pop()
                if last_operator == '&':
                    a, b = int(stack.pop()), int(stack.pop())
                    stack.append(a and b)
                elif last_operator == '|':
                    a, b = int(stack.pop()), int(stack.pop())
                    stack.append(a or b)
            stack.pop()  # Remove the '('
        else:
            if char in ['&', '|']:
                while stack and stack[-1] in ['&', '|']:
                    last_operator = stack.pop()
                    if last_operator == '&':
                        a, b = int(stack.pop()), int(stack.pop())
                        stack.append(a and b)
                    elif last_operator == '|':
                        a, b = int(stack.pop()), int(stack.pop())
                        stack.append(a or b)
                stack.append(char)
            else:
                stack.append(char)
    return stack[0]