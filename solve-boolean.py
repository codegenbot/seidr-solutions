def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solve_boolean(left) and solve_boolean(right)
    elif '|' in expression:
        left, right = expression.split('|', 1)
        if left == 'T':
            return True
        return solve_boolean(left) or solve_boolean(right)
    elif 'T' in expression and 'F' in expression:
        return False