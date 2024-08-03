def middle_character(s):
    s = s.strip()
    length = len(s)
    
    if length % 2 == 0:
        start = (length // 2) - 1
        return s[start:start+2]
    else:
        return s[length // 2]