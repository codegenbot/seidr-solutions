```
def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == '(':
            stack.append(char)
        elif char in ['&', '|']:
            while len(stack) > 0 and stack[-1] in ['&', '|']:
                op = stack.pop()
                result = True if char == '&' else False
                value = (char[0] == 't')
                stack.append(str(result and value))
            stack.append(char)
        elif char == ')':
            while len(stack) > 0 and stack[-1] != '(':
                stack.pop()
            stack.pop()  # Remove the '('
    return eval('True' + ''.join(stack) + 'False')