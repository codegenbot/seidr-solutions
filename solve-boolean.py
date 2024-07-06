def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == "t" or char == "f":
            stack.append(char)
        elif char == "|":
            right = stack.pop()
            left = stack.pop()
            stack.append(left | right)
        elif char == "&":
            right = stack.pop()
            left = stack.pop()
            stack.append(left & right)
    return stack[0] if stack else False