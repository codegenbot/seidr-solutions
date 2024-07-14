def solve_boolean(expression):
    precedence = {"&": 2, "|": 1}
    stack = []
    output = []

    for char in expression:
        if char.strip() in ["T", "F"]:
            output.append(char)
        elif char in ["&", "|"]:
            while len(stack) > 0 and (
                stack[-1] in precedence and precedence[stack[-1]] >= precedence[char]
            ):
                output.append(stack.pop())
            stack.append(char)
        else:
            if char == "(":
                stack.append(char)
            else:
                stack.append(char)

    while len(stack) > 0:
        output.append(stack.pop())

    return "T" if output[0] else "F"