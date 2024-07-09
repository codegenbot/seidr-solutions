Here's the solution:

def solveBoolean(expression):
    def evaluate(subexpression):
        if subexpression == 'T':
            return True
        elif subexpression == 'F':
            return False
        elif '&' in subexpression:
            left, right = subexpression.split('&')
            return evaluate(left) and evaluate(right)
        else:
            left, right = subexpression.split('|')
            return evaluate(left) or evaluate(right)

    return str(evaluate(expression))