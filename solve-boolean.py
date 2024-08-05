```
def solve_boolean(expression):
    def evaluate_expression(expression):
        operators = {'|': lambda a, b: a or b, '&': lambda a, b: a and b}
        values = {'T': True, 'F': False}

        stack = []
        for char in expression:
            if char in operators:
                right = stack.pop()
                left = stack.pop()
                operator = operators[char]
                stack.append(operator(left, right))
            elif char in values:
                stack.append(values[char])

        return stack[0]

    return evaluate_expression(expression)