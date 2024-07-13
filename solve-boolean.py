Here is the solution:

def solve_boolean(input_str):
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

    return evaluate(input_str)