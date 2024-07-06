
def solve_boolean(expression):
    # Use a stack to evaluate the expression recursively
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            # Evaluate the previous two elements using OR recursively
            a = solve_boolean(stack[-2])
            b = solve_boolean(stack[-1])
            stack.pop()
            stack.pop()
            stack.append(a or b)
        elif char == '&':
            # Evaluate the previous two elements using AND recursively
            a = solve_boolean(stack[-2])
            b = solve_boolean(stack[-1])
            stack.pop()
            stack.pop()
            stack.append(a and b)
    return stack[-1]