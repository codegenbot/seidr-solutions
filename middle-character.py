def middle_character(s):
    s = s.strip()
    length = len(s)
    if length % 2 == 0:
        midpoint = length // 2 - 1
    else:
        midpoint = length // 2
    return s[midpoint:midpoint+1]