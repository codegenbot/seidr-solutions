def solve_boolean(expression):
    expression = expression.lower()

    def evaluate(expr):
        if '|' in expr:
            left, right = expr.split('|', 1)
            return evaluate(left) or evaluate(right)
        elif '&' in expr:
            left, right = expr.split('&', 1)
            return evaluate(left) and evaluate(right)
        elif expr == 't':
            return True
        else:
            return False

    return evaluate(expression)