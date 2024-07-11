def solve_boolean(boolean_str):
    stack = []
    for char in boolean_str:
        if char == "T":
            stack.append(True)
        elif char == "F":
            stack.append(False)
        elif char == "|":
            a = stack.pop()
            b = stack.pop()
            stack.append(a or b)
        elif char == "&":
            a = stack.pop()
            b = stack.pop()
            stack.append(a and b)
    return stack[0]