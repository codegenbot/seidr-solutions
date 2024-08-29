def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        if left == 'F' and right == 'F':
            return False
        elif (left == 'T' and right == 'F') or (left == 'F' and right == 'T'):
            return False
        else:
            return True
    elif '|' in expression:
        left, right = expression.split('|')
        if left == 'F' and right == 'F':
            return False
        elif (left == 'T' and right == 'F') or (left == 'F' and right == 'T'):
            return True
        else:
            return True