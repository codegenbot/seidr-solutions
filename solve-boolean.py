def solveBoolean(expression):
    stack = []
    for char in expression[::-1]:
        if char == "T":
            stack.append(True)
        elif char == "F":
            stack.append(False)
        elif char == "&":
            b2 = stack.pop()
            b1 = stack.pop()
            stack.append(b1 and b2)
        elif char == "|":
            b2 = stack.pop()
            b1 = stack.pop()
            stack.append(b1 or b2)
    return stack[0]