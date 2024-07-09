```
def solve_boolean(expression):
    result = True
    stack = []
    for char in expression[::-1]:
        if char in '&|':
            prev_value = stack.pop()
            operator = stack.pop()
            if operator == '&':
                stack.append(prev_value and True)
            else:
                stack.append(prev_value or True)
        elif char in 'TF':
            stack.append(char == 'T')
    return stack[0]