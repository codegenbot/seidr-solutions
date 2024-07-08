```
def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for i in range(len(expression) - 1):
            if expression[i] == '&':
                result &= (expression[i+1] == 'T')
            elif expression[i] == '|':
                result |= (expression[i+1] == 'T')
        return result