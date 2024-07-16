```
def solve_boolean(expression):
    stack = []
    i = 0
    
    while i < len(expression):
        if expression[i] == 'T':
            stack.append(True)
        elif expression[i] == 'F':
            stack.append(False)
        elif expression[i] == '&':
            if len(stack) >= 2:
                a = stack.pop()
                b = stack.pop()
                stack.append(a and b)
            i += 1
        elif expression[i] == '|':
            if len(stack) >= 2:
                a = stack.pop()
                b = stack.pop()
                stack.append(a or b)
            i += 1
        i += 1
    
    return stack[0]