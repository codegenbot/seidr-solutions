def solve_boolean(boolean_expression):
    if boolean_expression == "T":
        return True
    elif boolean_expression == "F":
        return False
    elif "&" in boolean_expression and "|" in boolean_expression:
        raise ValueError("Invalid expression")
    else:
        stack = []
        for char in boolean_expression[::-1]:
            if char in ["&", "|"]:
                right = stack.pop()
                left = stack.pop()
                if char == "&":
                    stack.append(left and right)
                elif char == "|":
                    stack.append(left or right)
            else:
                stack.append(char != "F")
        return stack[0]