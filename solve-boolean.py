def solve_boolean(expression):
    def evaluate_expression(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif expression == "&":
            return lambda x, y: x and y
        elif expression == "|":
            return lambda x, y: x or y

    result = None
    operators = []
    operands = []

    for char in expression:
        if char in ["&", "|"]:
            while len(operands) < 1:
                raise ValueError("Invalid input")
            op2 = operands.pop()
            while len(operators) < 1:
                raise ValueError("Invalid input")
            op1 = operators.pop()
            operator = evaluate_expression(char)
            result = operator(op1, op2)
        elif char in ["T", "F"]:
            if result is not None:
                raise ValueError("Invalid input")
            result = evaluate_expression(char)
        else:
            operands.append(result)
            result = None

    return result