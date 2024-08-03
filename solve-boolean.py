def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    stack = []
    for char in expression[::-1]:
        if char in ["|", "&"]:
            right = stack.pop()
            left = stack.pop()
            if char == "|":
                stack.append(left or right)
            else:
                stack.append(left and right)
        else:
            stack.append(char != "F")
    return stack[0]