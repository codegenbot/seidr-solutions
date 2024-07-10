def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in ["T", "F"]:
            stack.append(char == "T")
        elif char == "&":
            result1 = stack.pop()
            result2 = stack.pop()
            stack.append(result1 and result2)
        elif char == "|":
            result1 = stack.pop()
            result2 = stack.pop()
            stack.append(result1 or result2)
    return all(stack)