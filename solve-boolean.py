Here's the solution:

def solve_boolean(input_str):
    stack = []
    for char in input_str + '&':
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            a, b = stack.pop(), stack.pop()
            stack.append(a or b)
        elif char == '&':
            a, b = stack.pop(), stack.pop()
            stack.append(a and b)
    return stack[0]