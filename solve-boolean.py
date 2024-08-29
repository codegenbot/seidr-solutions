```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        left_result = solve_boolean(left.strip())
        right_result = solve_boolean(right.strip())
        return left_result and right_result
    elif '|' in expression:
        left, right = expression.split('|')
        left_result = solve_boolean(left.strip())
        right_result = solve_boolean(right.strip())
        return left_result or right_result