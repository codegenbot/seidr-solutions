Here is the Python solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        left, right = expression.split('&')
        left = solve_boolean(left)
        right = solve_boolean(right)
        return left and right
    elif '&' in expression:
        left, right = expression.split('&')
        left = solve_boolean(left)
        right = solve_boolean(right)
        return left and right
    elif '|' in expression:
        left, right = expression.split('|')
        left = solve_boolean(left)
        right = solve_boolean(right)
        return left or right