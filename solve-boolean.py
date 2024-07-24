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
        for char in s:
            if char == '&':
                result &= True
            elif char == '|':
                result |= True
            elif char in ['T', 'F']:
                result = (result and char == 'T') or (result or char == 'T')
        return result