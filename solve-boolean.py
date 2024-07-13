def solve_boolean(s):
    if s == 't':
        return True
    elif s == 'f':
        return False
    elif '&' in s and '|' in s:
        raise ValueError("Invalid expression")
    else:
        a = s[0] == 't'
        b = s[-1] == 't' if len(s) > 1 else None

        if '&' in s:
            return a and (b is None or not b)
        elif '|' in s:
            return a or (b is None or b)