```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Expression")
    else:
        operators = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
        result = True
        operator = ''
        for char in expression:
            if char in ['&', '|']:
                result = operators[operator](result, eval(char + '1'))
                operator = char
            else:
                result = (result and char == 'T') or (result or char == 'F')
        return result