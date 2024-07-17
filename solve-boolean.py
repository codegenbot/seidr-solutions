def solve_boolean(expression):
    def evaluate_expression(expression):
        stack = []
        operations = {"|": lambda a, b: a or b, "&": lambda a, b: a and b}
        for char in expression:
            if char in operations:
                a = stack.pop()
                b = stack.pop()
                stack.append(operations[char](a, b))
            elif char == "T":
                stack.append(True)
            elif char == "F":
                stack.append(False)
        return stack[0]

    return str(evaluate_expression(expression))