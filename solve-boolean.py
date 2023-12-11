def solve_boolean(expression):
    # Use a stack to evaluate the expression
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '&':
            # Pop the top two elements of the stack, and push the result of ANDing them
            a = stack.pop()
            b = stack.pop()
            stack.append(a and b)
        elif char == '|':
            # Pop the top two elements of the stack, and push the result of ORing them
            a = stack.pop()
            b = stack.pop()
            stack.append(a or b)
    return stack[-1]