
def solve_boolean(expression):
    # Use a stack to evaluate the expression
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            # Evaluate the previous two elements using OR
            a = stack.pop()
            b = stack.pop()
            stack.append(a or b)
        elif char == '&':
            # Evaluate the previous two elements using AND
            a = stack.pop()
            b = stack.pop()
            stack.append(a and b)
    return stack[-1]