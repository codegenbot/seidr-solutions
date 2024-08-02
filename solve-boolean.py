def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in ["|", "&"]:
            right_operand = stack.pop()
            left_operand = stack.pop()
            if char == "|":
                stack.append(left_operand or right_operand)
            else:
                stack.append(left_operand and right_operand)
        elif char in ["T", "t"]:
            stack.append(True)
        elif char in ["F", "f"]:
            stack.append(False)
    return stack[0]