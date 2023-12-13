def solve_boolean(expression): 
    expression = expression.replace('T', 'True').replace('F', 'False') 
    expression = expression.replace('|', ' or ').replace('&', ' and ')
    return eval(expression)