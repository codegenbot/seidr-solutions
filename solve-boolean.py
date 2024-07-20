def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack[-1] != '(':
                first, second = stack.pop(), stack.pop()
                stack.append(not (not first and not second))
            stack.pop()  # Remove the '('
        elif char in ['&', '|']:
            while len(stack) > 0 and stack[-1] in ['&', '|']:
                if stack[-1] == '&':
                    first, second = stack.pop(), stack.pop()
                    stack.append(first and second)
                else:
                    first, second = stack.pop(), stack.pop()
                    stack.append(not (not first or not second))
            stack.append(char)
        elif char in ['T', 'F']:
            stack.append(char == 'T')