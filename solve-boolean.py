Here is the solution for the problem:

def solve_boolean(expression):
    stack = []
    result = False
    
    for char in expression + '|':
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '&':
            a = stack.pop()
            b = stack.pop()
            stack.append(a and b)
        elif char == '|':
            a = stack.pop()
            b = stack.pop()
            stack.append(a or b)
    
    return stack[0]