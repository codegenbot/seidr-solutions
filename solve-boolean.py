def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack[-1] != '(':
                last_operator = stack.pop()
                if last_operator == '&':
                    a, b = stack.pop(), stack.pop()
                    stack.append(bool(int(a)) and bool(int(b)))
                elif last_operator == '|':
                    a, b = stack.pop(), stack.pop()
                    stack.append(bool(int(a)) or bool(int(b)))
            stack.pop()  # Remove the '('
        else:
            if char in ['&', '|']:
                while stack and stack[-1] in ['&', '|']:
                    last_operator = stack.pop()
                    if last_operator == '&':
                        a, b = stack.pop(), stack.pop()
                        stack.append(bool(int(a)) and bool(int(b)))
                    elif last_operator == '|':
                        a, b = stack.pop(), stack.pop()
                        stack.append(bool(int(a)) or bool(int(b)))
                stack.append(char)
            else:
                stack.append(char)
    return stack[0]