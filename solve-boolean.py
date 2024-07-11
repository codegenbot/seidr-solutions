def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}
    precedence = {")": 3, "&": 1, "|": 0}

    stack = []
    for char in expression:
        if char in ["T", "F"]:
            stack.append(bool(char == "T"))
        elif char in precedence:
            while (
                len(stack) > 0
                and stack[-1] != "("
                and precedence[char] < precedence.get(stack[-1], 3)
            ):
                b = stack.pop()
                a = stack.pop()
                if stack and stack[-1] == "(":
                    stack.append("(")
                    break
                stack.append(operations[char](a, b))
        elif char == "(":
            stack.append(char)

    while len(stack) > 0:
        if stack[-1] == "(":
            stack.pop()
            break
        a = stack.pop()
        b = stack.pop()
        stack.append(operations["&"](a, b))

    return stack[0]