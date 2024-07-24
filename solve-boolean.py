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
                right_operand = stack.pop()
                left_operand = stack.pop()
                if char == "&":
                    result = left_operand and right_operand
                elif char == "|":
                    result = left_operand or right_operand
                stack.append(result)
            else:
                stack.append(char != "F")
        return stack[0]