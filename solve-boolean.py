```
def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    else:
        result = True
        for i in range(len(expression)):
            if expression[i] == '&':
                result &= (expression[i+1] == 'T')
            elif expression[i] == '|':
                result |= (expression[i+1] == 'T')
        return result