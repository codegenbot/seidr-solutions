def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return bool(eval(left) and eval(right))
    elif '|' in expression:
        left, right = expression.split('|')
        return bool(eval(left) or eval(right))