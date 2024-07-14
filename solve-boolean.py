def solve_boolean(expression):
    precedence = {"&": 1, "|": 0}
    stack = []
    output = []
    last_operator = None

    for char in expression:
        if char.strip() in ["T", "F"]:
            while len(stack) > 1 and (stack[-1] == "&" or stack[-1] == "|"):
                value2 = stack.pop()
                value1 = stack.pop() if stack else None
                result = value1 and value2 if last_operator == "&" else value1 or value2
                stack.append(result)
            output.append(char)
        elif char in ["&", "|"]:
            while len(stack) > 0 and (
                stack[-1] in precedence and precedence[stack[-1]] >= precedence[char]
            ):
                output.append(stack.pop())
            stack.append(char)
            last_operator = char
        else:
            if char == "(":
                stack.append(char)
            else:
                stack.append(char)

    while len(stack) > 0:
        output.append(stack.pop())

    return "T" if output[0] else "F"