def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        left = left.strip()
        right = right.strip()
        if left[0] == '(' and left[-1] == ')':
            left = solve_boolean(left)
        else:
            left = solve_boolean(left)
        if right[0] == '(' and right[-1] == ')':
            right = solve_boolean(right)
        else:
            right = solve_boolean(right)
        return left and right
    elif '|' in expression:
        left, right = expression.split('|')
        left = left.strip()
        right = right.strip()
        if left[0] == '(' and left[-1] == ')':
            left = solve_boolean(left)
        else:
            left = solve_boolean(left)
        if right[0] == '(' and right[-1] == ')':
            right = solve_boolean(right)
        else:
            right = solve_boolean(right)
        return left or right