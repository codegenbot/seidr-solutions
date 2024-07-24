```
def solve_boolean(expression):
    if expression == 't':
        result = True
    elif expression == 'f':
        result = False
    else:
        for i in range(len(expression)):
            if expression[i] == '&':
                if expression[:i].count('&') > 0 and expression[i+1:].count('|') > 0:
                    raise ValueError("Invalid operation")
                result &= (expression[i-1] == 't')
            elif expression[i] == '|':
                if expression.count('&') > 0 and expression.count('|') > 0:
                    raise ValueError("Invalid operation")
                result |= (expression[i-1] == 't')
    return result