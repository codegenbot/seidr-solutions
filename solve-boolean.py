Here is the completed code:

def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    else:
        operators = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
        for i in range(len(expression) - 1):
            if expression[i] in operators:
                return operators[expression[i]](expression[:i], expression[i+1:])