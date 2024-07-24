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
            if char == "&":
                a, b = stack.pop(), stack.pop()
                stack.append(a and b)
            elif char == "|":
                a, b = stack.pop(), stack.pop()
                stack.append(a or b)
            else:
                stack.append(char == "T")
        return stack[0]