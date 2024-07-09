def solveBoolean(expression):
    def evaluate(left, right):
        if left == "T":
            return right
        elif left == "F":
            return 1 - right
        else:
            raise ValueError("Invalid expression")

    stack = []
    for char in expression:
        if char in ["|", "&"]:
            right = int(stack.pop())
            left = stack.pop()
            stack.append(evaluate(left, right))
        elif char == "T":
            stack.append(1)
        elif char == "F":
            stack.append(0)
    return stack[0]