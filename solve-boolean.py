```
def solveBoolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= (expression[expression.index(char) + 1] == 't')
            elif char == '|':
                result |= (expression[expression.index(char) + 1] == 't')
        return result