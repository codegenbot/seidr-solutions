def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == '&':
            second = stack.pop()
            first = stack.pop()
            if first.lower() == 'f' and second.lower() == 'f':
                stack.append('False')
            elif first.lower() == 'f' or second.lower() == 'f':
                stack.append('False')
            else:
                stack.append('True')
        elif char == '|':
            second = stack.pop()
            first = stack.pop()
            if first.lower() == 't' and second.lower() == 't':
                stack.append('True')
            elif first.lower() == 'f' or second.lower() == 'f':
                stack.append('False')
            else:
                stack.append('True')
        else:
            stack.append(char)
    return stack[0] if stack else 'True'