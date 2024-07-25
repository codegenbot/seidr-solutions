def solve_boolean(input_str):
    stack = []
    for char in input_str + "&":
        if char == "t":
            stack.append(True)
        elif char == "f":
            stack.append(False)
        elif char == "|":
            v1, v2 = stack.pop(), stack.pop()
            stack.append(v1 or v2)
        elif char == "&":
            v1, v2 = stack.pop(), stack.pop()
            stack.append(v1 and v2)
    return stack[0]