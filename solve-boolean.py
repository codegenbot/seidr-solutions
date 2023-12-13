def solve_boolean(expression):
    def evaluate(expression):
        if expression == "t":
            return True
        if expression == "f":
            return False
        operands = expression.split("|")  
        operands = [op.split("&") for op in operands]  
        results = [all(evaluate(op) for op in sub_expr) for sub_expr in operands]
        return any(results)
    expression = expression.lower()
    return evaluate(expression)