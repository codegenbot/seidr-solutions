def middle_character(s):
    s = s.strip()
    length = len(s)
    midpoint = length // 2
    return s[midpoint-1:midpoint+1] if length % 2 == 0 else s[midpoint]