def solve_boolean(s):
    if s == 'T':
        return True
    elif s == 'F':
        return False
    elif '&' in s and '|' in s:
        raise ValueError("Invalid expression")
    else:
        result = True
        for i, c in enumerate(s):
            if c == '&':
                result &= eval(s[:i].replace('&', 'and').replace('|', 'or')) 
            elif c == '|':
                result |= eval(s[:i].replace('&', 'and').replace('|', 'or')) 
        return result