```
def solve_boolean(expression):
    precedence = {"&": 2, "|": 1}
    stack = []
    output = []

    for char in expression:
        if char.strip() in ["T", "F"]:
            output.append(char)
        elif char in ["&", "|"]:
            while len(stack) > 0 and (stack[-1] in precedence and precedence[stack[-1]] >= precedence[char]):
                top = stack.pop()
                while len(stack) > 0 and top in precedence and precedence[top] >= precedence[stack[-1]]:
                    output.append(top)
                    if not len(stack):
                        break
                output.append(top)
            stack.append(char)
        else:
            if char == "(":
                stack.append(char)
            else:
                stack.append(char)

    while len(stack) > 0:
        top = stack.pop()
        while len(stack) > 0 and top in precedence and precedence[top] >= precedence[stack[-1]]:
            output.append(top)
            if not len(stack):
                break
        output.append(top)

    return "T" if output[0] else "F"