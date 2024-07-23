def solve_boolean(expression):
    stack = []
    temp_stack = []
    for char in expression:
        if char == "(":
            temp_stack.append(stack)
            stack = []
        elif char == ")":
            b2 = stack.pop()
            b1 = stack
            stack = temp_stack[-1]
            temp_stack.pop()
            stack.append(eval(f"{b1} and {b2}"))
        else:
            if char in ["T", "F"]:
                stack.append(char == "T")
            elif char in ["|", "&"]:
                while len(stack) > 0 and (stack[-1] is not None):
                    temp = stack.pop()
                    if char == "|":
                        stack.append(temp or b)
                    else:
                        stack.append(temp and b)
                b = char
    return stack[0]