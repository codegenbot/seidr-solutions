def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Boolean operation")
    else:
        result = True
        for char in expression:
            if char == '&':
                result = result and (expression[expression.index(char) + 1] == 'T')
            elif char == '|':
                result = result or (expression[expression.index(char) + 1] == 'T')
        return result