Here is the Python solution:

def solveBoolean(expression):
    stack = []
    for char in expression:
        if char == '&':
            a = stack.pop()
            b = stack.pop()
            stack.append(a and b)
        elif char == '|':
            a = stack.pop()
            b = stack.pop()
            stack.append(a or b)
        else:
            stack.append(char == 'T')
    return bool(stack[0])