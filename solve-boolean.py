def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid Expression")
    else:
        stack = []
        for char in expression[::-1]:
            if char == "&":
                stack.append("and")
            elif char == "|":
                stack.append("or")
            else:
                while stack and (stack[-1] == "and" or stack[-1] == "or"):
                    op = stack.pop()
                    if op == "and":
                        result = stack.pop()
                    else:
                        result = not stack.pop()
                    if char == "t":
                        result = True
                    elif char == "f":
                        result = False
                    stack.append(result)
                if char == "t":
                    result = True
                elif char == "f":
                    result = False
        return result