```
def solve_boolean(s):
    def evaluate(expression):
        if 'T' in expression and 'F' in expression:
            return True
        elif 'F' * len(expression) == expression:
            return False
        else:
            for i in range(len(expression)):
                if expression[i] == '|':
                    return evaluate(expression[:i]) or evaluate(expression[i+1:])
                elif expression[i] == '&':
                    return evaluate(expression[:i]) and evaluate(expression[i+1:])

    return evaluate(s)