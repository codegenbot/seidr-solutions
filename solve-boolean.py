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
        for i in range(0, len(s), 2):
            if s[i] == '&':
                result &= (s[i+1] == 'T')
            elif s[i] == '|':
                result |= (s[i+1] == 'T')
        return result