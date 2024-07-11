def solve_boolean(s):
    if s == 't':
        return True
    elif s == 'f':
        return False
    elif '&' in s and '|' in s:
        raise ValueError("Invalid input")
    else:
        s = s.replace('&', '&')
        s = s.replace('|', ' or ')
        if eval(s.lower()):
            return True
        else:
            return False