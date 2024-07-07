def solve_boolean(expression):
    if '&' in expression and '|' in expression:
        raise Exception("Invalid expression")
    
    while '|' in expression:
        pos = expression.index('|')
        left, right = expression[:pos], expression[pos+1:]
        expression = str(bool(eval(left))) + ' & ' + str(bool(eval(right)))
    
    return eval(expression)