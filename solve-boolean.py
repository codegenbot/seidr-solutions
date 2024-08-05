```
def solveBoolean(boolExp):
    def evaluate(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression:
            return all(map(evaluate, expression.split('&')))
        elif '|' in expression:
            return any(map(evaluate, expression.split('|')))

    return evaluate(boolExp)