def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        if '|' in left:
            return solve_boolean(left.replace('|', '&')) and solve_boolean(right)
        else:
            return solve_boolean(left) and solve_boolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        if '&' in left:
            return solve_boolean(left.replace('&', '|')) or solve_boolean(right)
        else:
            return solve_boolean(left) or solve_boolean(right)