def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        stack = []
        for char in expression[::-1]:
            if char in ["&", "|"]:
                a, b = stack.pop(), stack.pop()
                if char == "&":
                    stack.append(a and b)
                elif char == "|":
                    stack.append(a or b)
            else:
                stack.append(char == "T")
        return stack[0]