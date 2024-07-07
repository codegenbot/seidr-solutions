
def solve_boolean(expression):
    if isinstance(expression, str):
        # Split the expression into operands and operators
        operands = expression.split("|")
        operators = ["&", "|"]
        result = True
        for op in operators:
            # Check if all operands are true
            if all(solve_boolean(exp) for exp in operands):
                result &= True
            else:
                result |= False
    elif isinstance(expression, list):
        for exp in expression:
            solve_boolean(exp)
```