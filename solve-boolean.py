```
def solveBoolean(s):
    if s == 't':
        return True
    elif s == 'f':
        return False
    elif '&' in s:
        a, b = s.split('&')
        return (a == 't' and b == 't') or (a == 'f' and b == 'f')
    elif '|' in s:
        a, b = s.split('|')
        return not ((a == 'f' and b == 'f'))