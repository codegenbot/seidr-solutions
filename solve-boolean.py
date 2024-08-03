```
def solve_boolean(input_string):
    stack = []
    result = False
    
    for char in input_string + 'T':
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            b1, b2 = stack.pop(), stack.pop()
            stack.append(b1 or b2)
        elif char == '&':
            b1, b2 = stack.pop(), stack.pop()
            stack.append(b1 and b2)
    
    return bool(stack[0])