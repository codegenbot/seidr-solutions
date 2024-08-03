```
def solveBoolean(expression):
    def evaluate(x, y):
        if x == 'T':
            return True
        elif x == 'F':
            return False
        elif x == '|':
            return lambda: evaluate(y, 'T') or evaluate(y, 'F')
        elif x == '&':
            return lambda: evaluate(y, 'T') and evaluate(y, 'F')

    result = eval('lambda: ' + ''.join(map(evaluate, expression)))
    return str(result())