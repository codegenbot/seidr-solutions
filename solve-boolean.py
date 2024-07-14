```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    result = True
    for char in expression:
        if char == '&':
            result &= True
        elif char == '|':
            while expression[expression.index(char)+1] != '&' and expression[expression.index(char)+1] != '|':
                if expression[expression.index(char)+1] == 'T':
                    result = False
                elif expression[expression.index(char)+1] == 'F':
                    return False
                expression = expression[:expression.index(char)+1] + '&' + expression[expression.index(char)+2:]
        elif char == 'T':
            result &= True
        elif char == 'F':
            return False
    return result