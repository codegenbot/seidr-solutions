def solve_boolean(expression):
    def evaluate(left, operator, right):
        if operator == "&":
            return left and right
        elif operator == "|":
            return left or right
        else:
            raise ValueError("Invalid operator")

    stack = []
    for char in expression[::-1]:
        if char in ["&", "|"]:
            right = stack.pop()
            left = stack.pop()
            result = evaluate(left, char, right)
            stack.append(result)
        elif char == "T":
            stack.append(True)
        elif char == "F":
            stack.append(False)

    return stack[0]