def solve_boolean(s):
    if s == 'T':
        return True
    elif s == 'F':
        return False
    elif '&' in s and '|' in s:
        raise ValueError("Invalid expression")
    elif '&' in s:
        return eval(' '.join(['True' if x == 'T' else 'False' for x in s]).replace('&', 'and')
    elif '|' in s:
        return eval(' '.join(['True' if x == 'T' else 'False' for x in s]).replace('|', 'or')