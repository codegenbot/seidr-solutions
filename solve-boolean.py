def solve_boolean(s):
    s += "&"
    stack = []
    for c in s:
        if c == "T":
            stack.append(True)
        elif c == "F":
            stack.append(False)
        elif c == "|":
            v2 = stack.pop()
            v1 = stack.pop()
            stack.append(v1 or v2)
        elif c == "&":
            v2 = stack.pop()
            v1 = stack.pop()
            stack.append(v1 and v2)
    return stack[0]