```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    else:
        result = True
        i = 0
        while i < len(expression):
            if expression[i] == '&':
                i += 1
                result &= (expression[i] == 'T')
            elif expression[i] == '|':
                i += 1
                result |= (expression[i] == 'T')
            i += 1
        return result