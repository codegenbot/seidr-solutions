def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid expression')
    else:
        result = None
        for char in expression:
            if char == '&':
                result = result and (expression[expression.index(char) + 1] == 'T')
            elif char == '|':
                if not result:
                    result = expression[expression.index(char) + 1] == 'T'
                else:
                    result = result or (expression[expression.index(char) + 1] == 'T')
        return result