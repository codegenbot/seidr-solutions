def solve_boolean(expression):
    # Use a stack to evaluate the expression
    stack = []
    for char in expression:
        if char == "T":
            stack.append(True)
        elif char == "F":
            stack.append(False)
        elif char == "|":
            # Evaluate all previous elements using OR
            result = False
            while len(stack) > 0:
                a = stack.pop()
                b = stack.pop()
                result |= a or b
            stack.append(result)
        elif char == "&":
            # Evaluate all previous elements using AND
            result = True
            while len(stack) > 0:
                a = stack.pop()
                b = stack.pop()
                result &= a and b
            stack.append(result)
    return stack[-1]