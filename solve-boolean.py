def solve_boolean(expression):
    expression = expression.lower().replace('t', 'True').replace('f', 'False')
    
    # Replace | and & with their respective Python operators
    expression = expression.replace('|', ' or ').replace('&', ' and ')
    
    return eval(expression)