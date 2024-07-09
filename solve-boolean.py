def solve_boolean(expression):
    stack = []
    for char in expression + '&':
        if char in '&|':
            if len(stack) >= 2:
                prev_value = stack.pop()
                operator = stack.pop()
                if operator == '&':
                    stack.append(prev_value and True)
                else:
                    stack.append(prev_value or True)
            stack.append(char)
        elif char in 'TF':
            stack.append(char == 'T')
    return stack[0]