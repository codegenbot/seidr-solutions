def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = eval(' '.join(['T' if c == 'T' else 'False' for c in expression]).replace('&', 'and').replace('|', 'or'))
        return result