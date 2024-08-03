def solveBoolean(s):
    if s == 'T':
        return True
    elif s == 'F':
        return False
    elif '&' in s:
        t = map(bool, s)
        return all(t)
    elif '|' in s:
        t = map(bool, s)
        return any(t)