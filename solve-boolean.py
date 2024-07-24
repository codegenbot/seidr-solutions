def solveBoolean(s):
    stack = []
    for c in s:
        if c == "T":
            stack.append(True)
        elif c == "F":
            stack.append(False)
        elif c == "&":
            b2 = stack.pop()
            b1 = stack.pop()
            stack.append(b1 and b2)
        elif c == "|":
            b2 = stack.pop()
            b1 = stack.pop()
            stack.append(b1 or b2)
    return stack[0]