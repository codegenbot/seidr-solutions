Here is the Python function that solves the problem:

def solve.Boolean(expression):
    result = True if expression == 't' else False
    for i in range(len(expression) - 1):
        if expression[i] in ['|', '&']:
            left = True if expression[:i].endswith('t') else False
            right = True if expression[i+1:].lstrip().startswith('t') else False
            result = (True, False)[expression[i] == '&'] or (result, left)[expression[i] == '|']
    return result