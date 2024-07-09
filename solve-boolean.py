def solve_boolean(expression):
    if '&' in expression:
        return eval(f"{expression.replace('&', 'and').replace('|', 'or')}")
    elif '|' in expression:
        return all(solve_boolean(arg) for arg in expression.split('|'))
    else:
        if expression == 'T':
            return True
        elif expression == 'F':
            return False