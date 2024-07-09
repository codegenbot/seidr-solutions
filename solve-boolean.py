def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        stack = []
        stack.append(expression[0] == "T")
        for char in reversed(expression)[1:]:
            if char in ["&", "|"]:
                right = stack.pop()
                left = stack.pop()
                if char == "&":
                    stack.append(left and right)
                elif char == "|":
                    stack.append(left or right)
            else:
                stack.append(char == "T")
        return stack[0]