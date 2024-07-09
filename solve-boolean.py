def solve_boolean(boolean_expression):
    if boolean_expression == 'T':
        return True
    elif boolean_expression == 'F':
        return False
    elif '&' in boolean_expression and '|' in boolean_expression:
        raise ValueError("Invalid expression")
    elif '&' in boolean_expression:
        left, right = boolean_expression.split('&')
        return not (bool(left) and bool(right))
    elif '|' in boolean_expression:
        left, right = boolean_expression.split('|')
        return bool(left) or (bool(right) == False)
    else:
        raise ValueError("Invalid expression")