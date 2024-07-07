def solve_boolean(expression):
    if '&' in expression and '|' in expression:
        raise Exception("Invalid expression")
    
    while '|' in expression:
        pos = expression.index('|')
        left, right = expression[:pos], expression[pos+1:]
        expression = str(bool(eval(left.replace('&', 'and').replace('|', 'or')))) + ' & ' + str(bool(eval(right.replace('&', 'and').replace('|', 'or'))))
    
    return eval(expression)