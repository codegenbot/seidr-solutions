Here is the solution:

def solveBoolean(expression):
    def evaluate(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif expression[0] == '&':
            return evaluate(expression[1:]) and evaluate(expression[2])
        else:
            return evaluate(expression[1:]) or evaluate(expression[2])

    return evaluate(expression)