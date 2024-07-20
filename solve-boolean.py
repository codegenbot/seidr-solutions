def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    if '&' in expression and '|' in expression:
        ops = ['&', '|']
        result = None
        for op in ops:
            left, right = expression.split(op)
            result = solve_boolean(left) if not result else op == '&' and result and solve_boolean(right) or op == '|' and result or solve_boolean(right)
        return result
    elif '&' in expression:
        left, right = expression.split('&')
        return solve_boolean(left) and solve_boolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solve_boolean(left) or solve_boolean(right)