```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid Boolean operation')
    else:
        operators = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
        result = expression[0]
        for i in range(1, len(expression)):
            if expression[i] in operators:
                result = operators[expression[i]](result, expression[i+1])
                i += 1
        return result