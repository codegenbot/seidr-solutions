def solve_boolean(expression):
    operators = {"|": lambda a, b: a or b, "&": lambda a, b: a and b}
    values = {"t": True, "f": False}
    stack = []
    for char in expression:
        if char == "(":
            stack.append(None)
        elif char == ")":
            result = stack.pop()
            while len(stack) > 1:
                operator = stack.pop()
                operand_b = stack.pop()
                operand_a = stack.pop()
                result = operators[operator](operand_a, operand_b)
                stack.append(result)
        elif char in values:
            stack.append(values[char])
    return stack[-1]