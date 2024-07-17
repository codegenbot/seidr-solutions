def solveBoolean(s):
    stack = []
    for c in s[::-1]:
        if c in ["|", "&"]:
            b2 = stack.pop()
            b1 = stack.pop()
            if c == "|":
                stack.append(b1 or b2)
            else:
                stack.append(b1 and b2)
        else:
            stack.append(c == "T")
    return stack[0]