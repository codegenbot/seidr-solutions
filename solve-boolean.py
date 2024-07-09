def solve_boolean(expression):
    if '&' in expression:
        return eval(f"{expression.replace('&', 'and').replace('|', 'or')}")
    elif '|' in expression:
        return any(solve_boolean(arg) for arg in expression.split('|'))
    else:
        left = ''.join(filter(lambda x: x not in '&|', expression))
        if left.startswith('T'):
            return True
        elif left.startswith('F'):
            return False