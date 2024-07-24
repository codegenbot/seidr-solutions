def solve_boolean(expression):
    stack = []
    for char in expression[::-1]:
        if char == "T":
            stack.append(True)
        elif char == "F":
            stack.append(False)
        elif char == "&":
            a = stack.pop()
            b = stack.pop()
            stack.append(a and b)
        elif char == "|":
            a = stack.pop()
            b = stack.pop()
            stack.append(a or b)
    return stack[0]