def solve_boolean(expression):
    if isinstance(expression, str):
        operands = expression.split("|")
        operators = ["&", "|"]
        result = True
        for op in operators:
            if all(solve_boolean(exp) for exp in operands):
                result &= True
            else:
                result |= False
    elif isinstance(expression, list):
        for exp in expression:
            solve_boolean(exp)