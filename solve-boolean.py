def solve_boolean(expression):
    expression = expression.lower()

    def evaluate(expr):
        if expr == 't':
            return True
        elif expr == 'f':
            return False

        if '|' in expr:
            left, right = expr.split('|', 1)
            return evaluate(left) or evaluate(right)
        elif '&' in expr:
            left, right = expr.split('&', 1)
            return evaluate(left) and evaluate(right)

    return evaluate(expression)