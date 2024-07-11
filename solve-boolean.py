Here's a possible solution:

def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        left, right = expression.split('&')
        return not (bool(left) and bool(right))
    elif '|' in expression:
        left, right = expression.split('|')
        return bool(left) or bool(right)
    else:
        raise ValueError("Invalid expression")