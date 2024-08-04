```
def solve_boolean(s):
    if s == 'T':
        return True
    elif s == 'F':
        return False
    elif '&' in s and '|' in s:
        raise ValueError("Invalid expression")
    else:
        result = True
        for c in s:
            if c == '&':
                result &= (s[s.index(c)+1:] != 'T')
            elif c == '|':
                result |= (s[s.index(c)+1:] != 'F')
        return result