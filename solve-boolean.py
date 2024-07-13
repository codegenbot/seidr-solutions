def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in ["T", "F"]:
            stack.append(char == "T")
        elif char == "&":
            b1 = stack.pop()
            b2 = stack.pop()
            stack.append(b1 and b2)
        elif char == "|":
            b1 = stack.pop()
            b2 = stack.pop()
            stack.append(b1 or b2)