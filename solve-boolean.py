def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solve_boolean(left) and solve_boolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solve_boolean(left) or solve_boolean(right)
    elif '(' in expression:
        i = expression.index('(')
        j = expression.index(')')
        inner_expr = expression[i+1:j].replace('T', 'True').replace('F', 'False')
        return eval('({})'.format(inner_expr))