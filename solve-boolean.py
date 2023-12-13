def solve_boolean(expression):
    expression = expression.lower()

    def evaluate(expr):
        if expr == 't':
            return True
        elif expr == 'f':
            return False

        if '|' in expr and '&' in expr:
            operands = expr.split('|', 1)
            return evaluate(operands[0]) or evaluate(operands[1])
        elif '|' in expr:
            operands = expr.split('|', 1)
            return evaluate(operands[0]) or evaluate(operands[1])
        elif '&' in expr:
            operands = expr.split('&', 1)
            return evaluate(operands[0]) and evaluate(operands[1])
        else:
            return evaluate(expr)

    return evaluate(expression)