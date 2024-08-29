def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        if left[-1] == '&':
            return not solve_boolean(right)
        else:
            return solve_boolean(left) and solve_boolean(right[:-1])
    elif '|' in expression:
        left, right = expression.split('|')
        if left[-1] == '|':
            return solve_boolean(right)
        else:
            return solve_boolean(left) or solve_boolean(right[:-1])