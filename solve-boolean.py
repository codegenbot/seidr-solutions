def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid Expression")
    else:
        stack = []
        for char in reversed(expression):
            if char == "&":
                a = stack.pop()
                b = stack.pop()
                stack.append(a and b)
            elif char == "|":
                a = stack.pop()
                b = stack.pop()
                stack.append(a or b)
            else:
                stack.append(char == "T")
        return stack[0]