def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    stack = []
    for char in reversed(expression):
        if char in ["&", "|"]:
            b1, b2 = bool(stack.pop()), bool(stack.pop())
            if char == "&":
                stack.append(b1 and b2)
            else:
                stack.append(b1 or b2)
        elif char in ["T", "F"]:
            stack.append(char == "T")
    return stack[0]