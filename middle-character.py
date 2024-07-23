def middle_character(s):
    s = s.strip()
    length = len(s)
    mid = length // 2
    
    return s[mid-1+(length%2)]