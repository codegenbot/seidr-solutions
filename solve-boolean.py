```
def solve_boolean(expression):
    def evaluate(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression:
            a, b = expression.split('&')
            return evaluate(a) and evaluate(b)
        elif '|' in expression:
            a, b = expression.split('|')
            return evaluate(a) or evaluate(b)

    return evaluate(expression)