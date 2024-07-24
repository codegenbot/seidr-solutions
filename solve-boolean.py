Here is the completed code:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid input')
    elif '&' in expression:
        left, right = expression.split('&')
        return not (solve_boolean(left) and solve_boolean(right))
    elif '|' in expression:
        left, right = expression.split('|')
        return solve_boolean(left) or solve_boolean(right)
    else:
        raise ValueError('Invalid input')