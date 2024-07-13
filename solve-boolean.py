def solve_boolean(bool_expression):
    if bool_expression == 'T':
        return True
    elif bool_expression == 'F':
        return False
    elif '&' in bool_expression and '|' in bool_expression:
        raise ValueError("Invalid boolean expression")
    elif '&' in bool_expression:
        a, b = bool_expression.split('&')
        return not (bool(a) and bool(b))
    elif '|' in bool_expression:
        a, b = bool_expression.split('|')
        return bool(a) or bool(b)
    else:
        raise ValueError("Invalid boolean expression")