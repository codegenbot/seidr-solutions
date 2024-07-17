def solve_boolean(s):
    stack = []
    ops = []
    for c in s + "|&":
        if c == "T":
            stack.append(True)
        elif c == "F":
            stack.append(False)
        elif c == "|":
            while ops and ops[-1] == "&":
                v2 = stack.pop()
                v1 = stack.pop()
                stack.append(v1 or v2)
                ops.pop()
            ops.append("|")
        elif c == "&":
            ops.append("&")
    return stack[0]