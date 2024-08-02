def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    stack = []
    for char in expression[::-1]:
        if char in ["&", "|"]:
            b, a = stack.pop(), stack.pop()
            if char == "&":
                stack.append(a and b)
            else:
                stack.append(a or b)
        else:
            stack.append(char != "F")
    return stack[0]