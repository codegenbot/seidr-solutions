```
def solve_boolean(expression):
    result = True if expression == 't' else False
    for i in range(len(expression)):
        if expression[i] == '&':
            result = result and (expression[i+1] == 't')
        elif expression[i] == '|':
            result = result or (expression[i+1] == 't')
    return result