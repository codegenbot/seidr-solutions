def solve_boolean(expression):
    postfix = convert_to_postfix(expression)

    stack = []
    for char in postfix.split():
        if char.strip() in ["T", "F"]:
            stack.append(char == "T")
        elif char in ["&", "|"]:
            value2 = stack.pop()
            if not stack:
                return False
            value1 = stack.pop() if stack else True
            result = value1 and value2 if char == "&" else value1 or value2
            stack.append(result)
        # Ignore parentheses, they are handled when converting to postfix

    return stack[0]