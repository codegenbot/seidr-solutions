def solve_boolean(expression):
    postfix = convert_to_postfix(expression)
    stack = []
    for char in postfix.split():
        if char.strip() in ["T", "F"]:
            if char == "T":
                stack.append(True)
            else:
                stack.append(False)
        elif char in ["&", "|"]:
            while len(stack) > 1:
                value2 = stack.pop()
                value1 = stack.pop() if stack else None
                result = value1 and value2 if char == "&" else value1 or value2
                while stack and (stack[-1] == ")" or precedence[stack[-1]] < precedence[char]):
                    stack.pop()
                stack.append(result)

    return stack[0]

def convert_to_postfix(expression):
    precedence = {"&": 1, "|": 0}
    output = []
    operator_stack = []

    for char in expression:
        if char.strip() in ["T", "F"]:
            output.append(char)
        elif char == "(":
            operator_stack.append(char)
        else:
            if char == ")":
                while operator_stack[-1] != "(":
                    output.append(operator_stack.pop())
                operator_stack.pop()
            elif char in ["&", "|"]:
                while (
                    len(operator_stack) >= 1
                    and operator_stack[-1] in precedence
                    and precedence[operator_stack[-1]] >= precedence[char]
                ):
                    output.append(operator_stack.pop())
                operator_stack.append(char)

    # Empty the stack
    while len(operator_stack) > 0:
        output.append(operator_stack.pop())

    return " ".join(output)