Here is the solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for operation, value in zip(['&', '|'], expression.split()):
            if value == 'T':
                value = True
            elif value == 'F':
                value = False
            if operation == '&':
                result = result and value
            elif operation == '|':
                result = result or value
        return result