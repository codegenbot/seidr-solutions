def solveBoolean(expression):
    stack = []
    for char in expression[::-1]:
        if char in "TF":
            result = char == "T"
            while stack and stack[0] in "|&":
                op = stack.pop()
                if op == "|":
                    result = result or stack[0]
                elif op == "&":
                    result = result and stack[0]
                stack.append(not result)
        else:
            stack.append(char)
    return bool(stack.pop())