```
def solve_boolean(s):
    if s == 'T':
        return True
    elif s == 'F':
        return False
    elif '&' in s:
        a, b = s.split('&')
        return bool(int(a)) & bool(int(b))
    else:
        return bool(int(s))