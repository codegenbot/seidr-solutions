def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&', 1)
        return solve_boolean(left) and solve_boolean(right)
    else: 
        left, right = expression.split('|', 1)
        return solve_boolean(left) or solve_boolean(right)