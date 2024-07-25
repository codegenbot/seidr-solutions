def solve_boolean(expression):
    def evaluate_expression(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif len(expression) > 1:
            a = expression[0]
            op = expression[1]
            b = expression[2:]
            if op == "|":
                return evaluate_expression(a) or evaluate_expression(b)
            elif op == "&":
                return evaluate_expression(a) and evaluate_expression(b)

    return evaluate_expression(expression)