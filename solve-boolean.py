def solve_boolean(expression):
    def evaluate_operand(char):
        if char == "T":
            return True
        elif char == "F":
            return False

    stack = []
    result = None
    operator = None

    for char in expression:
        if char in ["T", "F"]:
            stack.append(evaluate_operand(char))
        elif char in ["|", "&"]:
            while len(stack) > 1 and (stack[-1] == "&" or stack[-2] == "&"):
                right = stack.pop()
                left = stack.pop()
                if operator == "|":
                    stack.append(left or right)
                else:
                    stack.append(left and right)
            stack.append(char)
        elif char == ")":
            while stack[-1] != "(":
                right = stack.pop()
                left = stack.pop()
                if operator == "|":
                    stack.append(left or right)
                else:
                    stack.append(left and right)
            stack.pop()  # Remove the '('
    return stack[0]