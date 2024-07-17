def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        return all(map(lambda x: x.lower() == 't', expression))
    elif '|' in expression:
        return any(map(lambda x: x.lower() == 't', expression))