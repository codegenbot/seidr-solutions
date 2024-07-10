def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        return all(solve_boolean(part) for part in expression.split('&'))
    else:  
        return any(solve_boolean(part) for part in expression.split('|'))