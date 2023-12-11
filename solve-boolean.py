
def solve_boolean(expression):
    # Use a stack to evaluate the expression
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            # Evaluate the OR operation
            right = stack.pop()
            left = stack.pop()
            result = left or right
            stack.append(result)
        elif char == '&':
            # Evaluate the AND operation
            right = stack.pop()
            left = stack.pop()
            result = left and right
            stack.append(result)
    return stack[-1]