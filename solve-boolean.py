def solve_boolean(expression):
    expression = expression.lower()

    def evaluate(expr):
        if expr == 't':
            return True
        elif expr == 'f':
            return False

        if '|' in expr and '&' not in expr:
            left, right = expr.split('|', 1)
            return evaluate(left) or evaluate(right)
        elif '|' not in expr and '&' in expr:
            left, right = expr.split('&', 1)
            return evaluate(left) and evaluate(right)
        elif '|' in expr and '&' in expr:
            ors = expr.split('|')
            return any(evaluate(o) for o in ors)
        else:
            return evaluate(expr)

    return evaluate(expression)