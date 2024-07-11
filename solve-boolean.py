```
def solve_boolean(expression):
    def evaluate(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression and '|' in expression:
            raise ValueError("Invalid expression")
        elif '&' in expression:
            left, right = expression.split('&')
            return not (evaluate(left) and evaluate(right))
        elif '|' in expression:
            left, right = expression.split('|')
            return evaluate(left) or evaluate(right)
    return evaluate(expression)