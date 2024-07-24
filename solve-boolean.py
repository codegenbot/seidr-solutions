def solve_boolean(s):
    if s == 't':
        return True
    elif s == 'f':
        return False
    elif '&' in s and '|' in s:
        raise ValueError("Invalid expression")
    elif '&' in s:
        a, b = s.split('&')
        return not (bool(a) and bool(b))
    elif '|' in s:
        a, b = s.split('|')
        return bool(a) or bool(b)
    else:
        raise ValueError("Invalid expression")