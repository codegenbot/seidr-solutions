def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        if left == 'F' and right == 'F':
            return False
        else:
            return solve_boolean(left) and solve_boolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        if left == 'T' or right == 'T':
            return True
        elif left == 'F' and right == 'F':
            return False
        else:
            return solve_boolean(left) or solve_boolean(right)