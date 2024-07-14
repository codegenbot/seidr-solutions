def solve_boolean(expression):
    while '&' in expression and '|' in expression:
        expression = expression.replace('&|', '&&|').replace('|&', '|&&')
    if '(' not in expression and ')' not in expression:  
        return True if expression == 'T' else False
    elif '&' in expression:
        left, right = expression.split(' & ')
        return solve_boolean(left) and solve_boolean(right)
    else:
        left, right = expression.split(' | ')
        return solve_boolean(left) or solve_boolean(right)