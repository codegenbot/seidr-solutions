def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        stack = []
        for char in expression[::-1]:
            if char in {"&", "|"}:
                a, b = stack.pop(), stack.pop()
                stack.append(char == "&" and a and b or char == "|" and a or b)
            elif char in {"T", "F"}:
                stack.append(char == "T")
        return stack[0]