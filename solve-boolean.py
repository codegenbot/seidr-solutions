def solve_boolean(expression):
    result = True if expression[0] == 'T' else False
    for char in expression:
        if char == '&':
            result = result and (expression[expression.index(char)+1] == 'T')
        elif char == '|':
            result = result or (expression[expression.index(char)+1] == 'T')
    return result