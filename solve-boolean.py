def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        stack = []
        for char in reversed(expression):
            if char in {"&", "|"}:
                right = stack.pop()
                left = stack.pop()
                if char == "&":
                    result = left and right
                elif char == "|":
                    result = left or right
                stack.append(result)
            else:
                stack.append(char != "F")
        return stack[0]