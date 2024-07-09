```
def solve_boolean(expression):
    stack = []
    for char in expression + '&':
        if char in '&|':
            if len(stack) >= 2:
                prev_value = stack.pop()
                operator = stack.pop()
                result = prev_value
                if operator == '|':
                    if operator == '&':
                        result = prev_value and True
                    else:
                        result = prev_value or True
                stack.append(result)
        elif char in 'TF':
            stack.append(char == 'T')
    return stack[0]