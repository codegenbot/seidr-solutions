```
def solve_boolean(expression):
    def evaluate(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression:
            a, b = map(evaluate, expression.split('&'))
            return a and b
        elif '|' in expression:
            a, b = map(evaluate, expression.split('|'))
            return a or b

    return evaluate(expression)