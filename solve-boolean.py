def solve_boolean(expression):
    def evaluate(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression and '|' in expression:
            raise ValueError("Invalid expression")
        else:
            left, right = expression.split('&')
            return not (evaluate(left) or evaluate(right))

    return evaluate(expression)