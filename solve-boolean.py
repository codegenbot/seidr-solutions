def solve_boolean(boolean_expression):
    if boolean_expression == 'T':
        return True
    elif boolean_expression == 'F':
        return False
    elif '&' in boolean_expression:
        left, right = boolean_expression.split('&')
        return solve_boolean(left) and solve_boolean(right)
    elif '|' in boolean_expression:
        left, right = boolean_expression.split('|')
        return solve_boolean(left) or solve_boolean(right)
    else:
        raise ValueError('Invalid input')