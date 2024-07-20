def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == "T":
            stack.append(True)
        elif char == "F":
            stack.append(False)
        elif char in ["&", "|"]:
            b2 = stack.pop()
            b1 = stack.pop()  
            if char == "&":
                stack.append(b1 and b2)
            else:
                stack.append(b1 or b2)
    return stack[0]