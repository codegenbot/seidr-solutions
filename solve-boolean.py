def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise Exception("Invalid expression")
    else:
        stack = []
        for char in reversed(expression):
            if char == "&":
                right = stack.pop()
                left = stack.pop()
                stack.append(left and right)
            elif char == "|":
                right = stack.pop()
                left = stack.pop()
                stack.append(left or right)
            else:
                stack.append(char == "T")
        return stack[0]