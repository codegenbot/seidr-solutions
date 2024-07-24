```
def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    else:
        result = True
        while '&' in expression and '|' in expression:
            if '&' in expression:
                expression = expression.replace('&', ' and ', 1)
            if '|' in expression:
                expression = expression.replace('|', ' or ', 1)
        if '&' not in expression and '|' not in expression:
            return expression == 't'
        else:
            result = False
            for char in expression:
                if char == 'a':
                    result &= (expression[0] == 't')
                elif char == 'o':
                    result |= (expression[0] == 't')
                expression = expression[1:]
            return result