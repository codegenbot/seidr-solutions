```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Boolean operation")
    else:
        result = True if expression[0] == 't' else False
        for i in range(1, len(expression)):
            if expression[i] in '&|':
                if expression[i-1] != expression[i]:
                    return False
            elif expression[i] == '&':
                result = result and (expression[i+1] == 't')
            elif expression[i] == '|':
                result = result or (expression[i+1] == 't')
        return result