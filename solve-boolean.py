def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise Exception("Invalid Expression")
    else:
        stack = []
        for char in expression[::-1]:
            if char in ["&", "|"]:
                b = stack.pop()
                a = stack.pop()
                if char == "&":
                    stack.append(a and b)
                elif char == "|":
                    stack.append(a or b)
            else:
                stack.append(char == "T")
        return stack[0]