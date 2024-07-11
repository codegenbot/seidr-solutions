def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}

    stack = []
    temp_stack = []

    for char in expression:
        if char in ["T", "F"]:
            stack.append(bool(char == "T"))
        elif char == "(":
            temp_stack.append(stack)
            stack = []
        elif char == ")":
            result = stack.pop()
            temp_stack.append(result)
        else:
            if temp_stack and temp_stack[-1] != operations[char](
                stack.pop(), stack.pop()
            ):
                break
            stack.append(char)

    return stack[0]