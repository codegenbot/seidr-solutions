```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for term in expression.split('&'):
            temp = False
            for operation in term.split('|'):
                if operation == 'T':
                    temp = True
                elif operation == 'F':
                    temp = False
            result &= temp
        return result