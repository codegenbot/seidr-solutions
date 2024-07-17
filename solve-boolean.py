def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Expression")
    else:
        result = eval(expression.replace('T', 'True').replace('F', 'False').replace('&', 'and').replace('|', 'or'))
        return result