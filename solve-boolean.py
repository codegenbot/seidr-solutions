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
                b2, b1 = stack.pop(), stack.pop()
                stack.append(char == "&" and b1 and b2 or char == "|" and b1 or b2)
            elif char in {"T", "F"}:
                stack.append(char == "T")
        return stack[0]