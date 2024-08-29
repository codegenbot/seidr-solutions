```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        if left.strip() == 'T' and right.strip() == 'T':
            return True
        elif left.strip() == 'T' or right.strip() == 'T':
            return True
        else:
            return False
    elif '|' in expression:
        left, right = expression.split('|')
        if left.strip() == 'F' and right.strip() == 'F':
            return False
        elif left.strip() == 'F' or right.strip() == 'F':
            return False
        else:
            return True