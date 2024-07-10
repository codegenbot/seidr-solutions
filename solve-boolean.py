def solve_boolean(bool_str):
    if bool_str == "T":
        return True
    elif bool_str == "F":
        return False
    elif "&" in bool_str and "|" in bool_str:
        raise ValueError("Invalid expression")
    else:
        stack = []
        for char in bool_str:
            if char in ["&", "|"]:
                right_operand = int(stack.pop())
                left_operand = int(stack.pop())
                if char == "&":
                    result = left_operand and right_operand
                elif char == "|":
                    result = left_operand or right_operand
                stack.append(result)
            else:
                stack.append(1 if char == "T" else 0)
        return bool(stack[0])