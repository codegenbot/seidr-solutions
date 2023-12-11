def solve_boolean(expression):
    # Use a stack to evaluate the expression
    stack = []
    for char in expression:
        if char == 't':
            stack.append(True)
        elif char == 'f':
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

solve_boolean('t')
# returns True
solve_boolean('f')
# returns False
solve_boolean('f&f')
# returns False
solve_boolean('f&t')
# returns False
solve_boolean('t&f')
# returns False