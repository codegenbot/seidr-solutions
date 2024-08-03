```
def solve_boolean(s):
    if s == 'T':
        return True
    elif s == 'F':
        return False
    elif '&' in s and '|' in s:
        raise ValueError('Invalid input')
    else:
        result = True if s[0] == 'T' else False
        for i in range(1, len(s)):
            if s[i] == '&':
                result &= eval(s[i+1])
            elif s[i] == '|':
                result |= eval(s[i+1])
        return result