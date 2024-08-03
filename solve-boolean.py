def solve_boolean(expression):
    def boolean_operator(operator):
        if operator == "|":
            return lambda a, b: a or b
        elif operator == "&":
            return lambda a, b: a and b

    def evaluate_expression(expression):
        stack = []
        for char in expression:
            if char.isalpha():
                stack.append(char)
            else:
                operator = stack.pop()
                operand2 = stack.pop()
                stack.append(
                    boolean_operator(operator)(operand1 == "T", operand2 == "T")
                )
        return stack[0] == "T"

    return evaluate_expression(expression)