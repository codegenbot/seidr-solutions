```
def solve_boolean(s):
    if s == 'T':
        return True
    elif s == 'F':
        return False
    elif '&' in s and '|' in s:
        raise ValueError('Invalid expression')
    elif '&' in s:
        s = s.replace('&', 'and')
    elif '|' in s:
        s = s.replace('|', 'or')

    result = True
    for i, c in enumerate(s):
        if c == 'F':
            result = False
        elif c == 'T' and not (i == 0 or s[i-1] == '(' or s[i-1] == ')'):
            return False

    return result