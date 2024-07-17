def solve_boolean(expression):
    def evaluate_expression(expression):
        stack = []
        for char in expression:
            if char == "|":
                a = stack.pop()
                b = stack.pop()
                stack.append(a or b)
            elif char == "&":
                a = stack.pop()
                b = stack.pop()
                stack.append(a and b)
            else:
                stack.append(char == "T")
        return stack[0]

    return str(evaluate_expression(expression))