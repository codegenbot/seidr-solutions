Here is the completed code:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        operators = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
        parts = expression.split()
        result = None
        for part in parts:
            if part in operators:
                operator = part
            else:
                value = part == 'T'
                if result is None:
                    result = value
                else:
                    result = operators[operator](result, value)
        return result