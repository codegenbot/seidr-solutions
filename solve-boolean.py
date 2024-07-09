```
def solve_boolean(expression):
    if '&' in expression:
        return all(bool(s.replace('T', 'True').replace('F', 'False')) for s in expression.split('&'))
    elif '|' in expression:
        return any(bool(s.replace('T', 'True').replace('F', 'False')) for s in expression.split('|'))
    else:
        left = ''.join(filter(lambda x: x not in '&|', expression))
        if left.startswith('T'):
            return True
        elif left.startswith('F'):
            return False